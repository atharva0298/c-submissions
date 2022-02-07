#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    float res = pow(0.143*n,n);
	    cout<<round(res);
	}
	return 0;
}
