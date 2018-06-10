/*
 * URI 1839 - A câmara secreta
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1839
 */

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007 
typedef long long int ll;
ll vet[3000];

ll fat(int n){
	if(vet[n] != -1) return vet[n];
	return vet[n] = (n*fat(n-1))%mod;
}

ll fast_exp(ll n,ll e){
	ll r = 1;
	while(e){
		if(e&1) r = (r*n)%mod;
		n = (n*n)%mod;
		e>>=1;
	}
	return r;
}

int main(){
	int n,m,xa,xb,ya,yb,tudo,cont;
	char matriz[55][55];
	memset(vet,-1,sizeof vet);
	vet[0] = 1;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf(" %c",&matriz[i][j]);
		}
	}
	ll a,b;
	while(scanf("%d%d%d%d",&xa,&ya,&xb,&yb) != -1){
		tudo = cont = 0;
		for(int i=xa;i <= xb; i++){
			for(int j= ya;j <= yb; j++){
				if(matriz[i][j] == '#')
					cont++;
				tudo++;
			}
		}
		a = fat(tudo);
		b = (fat(cont)*fat(tudo-cont))%mod;
		cout<<(a*fast_exp(b,mod-2))%mod-1<<endl;
	}
	return 0;
}
