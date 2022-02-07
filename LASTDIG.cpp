#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int binExp(long long int x, long long int y){
    long long int ans = 1;
   while (y>0)
        {
                if (y%2==1)
                        ans = (ans*x) % 10;
                x = (x*x)%10;
                y/=2;
        }
    return ans;
}

int main() {
    int t;
    cin>>t;
    long long int a;
    long long int b;

   while(t--){
       cin>>a>>b;
       cout<<binExp(a,b)<<endl;
   }
   
    return 0;
}