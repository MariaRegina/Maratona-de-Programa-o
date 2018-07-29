/*
 * UVa - 686 - Goldbach's Conjecture (II)
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=627
 */

#include <bits/stdc++.h>
using namespace std;

#define maxn 40000

int v[maxn],vis[maxn];

void crivo(){
	v[1] = 1;
	for(int i = 2; i <= maxn; i++){
		if(!v[i]){
			for(int j=2; i*j <= maxn; j++) v[i*j] = 1;
		}
	}
}

int main(){
	int n;
	crivo();
	while(scanf("%d",&n), n){
		memset(vis,0,sizeof vis);
		int cont = 0;
		for(int i=2; i<n; i++){
			if(v[i] == 0 && v[n-i] == 0 && !vis[i] && !vis[n-i]){
				vis[i] = vis[n-i] = 1;
				cont++;
			}
		}
		cout<<cont<<endl;
	}
	return 0;
}
