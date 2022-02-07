#include<iostream>
#include<bits/stdc++.h>
#define M 1000000007

using namespace std;

long long  binExp(long long  a, long long  n) {
	if(n == 0)
		return 1;
	if(n == 1)
		return a%M;
	long long  r = binExp(a, n/2);
	if(n % 2 == 0) {
		return (r%M * r%M)%M;
	}
	else 
		return (r%M * r%M * a%M)%M;
}

int main(){
    long long int n,k;
    // cin>>n>>k;
    // long long sum = 0;
    //     for(long long int i=1;i<=n;i++){
    //         sum = sum%M + (binExp(i,k)%M) + (binExp(i,i)%M);
    //     }    
    //     cout<<sum%M<<endl;

     while(cin>>n>>k){
         if(n == 0 && k == 0){
             return 0;
         }
       long long sum1 = 0;
         for(long long int i=1;i<=n;i++){
             sum1 = ((sum1 + binExp(i,k) + binExp(i,i)) % M);
         }    
         cout<<sum1%M<<endl;
     }
    return 0;
}