/*
 * URI 1088 Bolhas e Baldes
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1088
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n), n){
		int v[n],cont = 0;
		for(int i=0;i<n;i++) scanf("%d",&v[i]);
		for(int i=0;i<n;i++){
			while(v[i] != i+1){
				swap(v[i], v[v[i]-1]);
				cont++;
			}
		}
		if(cont%2) cout<<"Marcelo"<<endl;
		else cout<<"Carlos"<<endl;
	}
	return 0;
}
