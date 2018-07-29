/*
 * UVa - 543 - Goldbach's Conjecture
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=484
 */

#include <bits/stdc++.h>
using namespace std;

#define maxn 1001000

int v[maxn];

void crivo(){
	v[0] = 1;
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
		for(int i=2; i<n; i++){
			if(v[i] == 0 && v[n-i] == 0){
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				break;
			}
		}
	}
	return 0;
}
