/*
 * Autopotencial - URI - 2505
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/2505
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll mod = 1000000;

ll fast_exp(ll n,ll e){
	ll r = 1;
	while(e){
		if(e&1)
			r = (r*n)%mod;
		n = (n*n)%mod;
		e>>=1;
	}
	return r;
}

ll exp(ll n,ll e){
	ll r = 1;
	while(e){
		if(e&1)
			r = (r*n);
		n *= n;
		e>>=1;
	}
	return r;
}

int main(){
	long long int a,saida,mod;
	int aux;
	//~ freopen("entrada","r",stdin);
	while(scanf("%lld",&a)!=EOF){
		saida = fast_exp(a,a);
		aux = log10(a);
		mod = exp(10,aux+1);
		if(a==saida%mod){
			printf("SIM\n");
		}else{
			printf("NAO\n");
		}
	}
	
	return 0;
}
