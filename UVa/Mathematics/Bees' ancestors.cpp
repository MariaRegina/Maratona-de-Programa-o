/*UVa - 12459 - Bees' ancestors*/

#include <bits/stdc++.h>
using namespace std;

long long int vet[90];

long long int fib(int n){
	if(vet[n]==-1)
		vet[n] = fib(n-1)+fib(n-2);
	return vet[n];
}

int main(){
	int n;
	memset(vet,-1,sizeof vet);
	while(scanf("%d",&n),n){
		vet[1] = 1;
		vet[2] = 2;
		if(vet[n]==-1) fib(n);
		printf("%lld\n",vet[n]);
	}
	return 0;
}
