#include <iostream>
#include <bits/stdc++.h>
#define M 1000000007
using namespace std;

long long  binPow(long long  a, long long  n) {
	if(n == 0)
		return 1;
	if(n == 1)
		return a%M;
	long long  r = binPow(a, n/2);
	if(n % 2 == 0) {
		return (r%M * r%M)%M;
	}
	else 
		return (r%M * r%M * a%M)%M;
}