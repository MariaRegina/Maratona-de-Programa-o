// UVa - 11846 - CD

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,aux,cont;
	//~ freopen("entrada","r",stdin);
	while(scanf("%d%d",&n,&m),n||m){
		set <int> cd;
		cont = 0;
		for(int i=0;i<n;i++){
			cin>>aux;
			if(cd.find(aux)!=cd.end()) cont++;
			cd.insert(aux);
		}
		for(int i=0;i<m;i++){
			cin>>aux;
			if(cd.find(aux)!=cd.end()) cont++;
			cd.insert(aux);
		}
		printf("%d\n",cont);
	}
	return 0;
}
