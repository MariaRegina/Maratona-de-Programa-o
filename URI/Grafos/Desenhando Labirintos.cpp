/*URI - 1076 - Desenhando Labirintos*/

#include <bits/stdc++.h>
using namespace std;

set <int> lista[50];
int visitado[50];
int lbl[50];
int cont;

void DFS(int inicio){ 
	visitado[inicio] = 1; 
	for(set <int>::iterator it = lista[inicio].begin(); it!=lista[inicio].end(); it++){
		if(visitado[*it]==-1){
			cont++; 
			DFS(*it); 
		}
	}
}

int main(){
	int v,a,n,inicio,x,y;
	//~ freopen("entrada","r",stdin);
	scanf("%d",&n);
	while(n--){
		cont = 0;
		memset(visitado,-1,sizeof visitado);
		memset(lbl,-1,sizeof lbl);
		scanf("%d%d%d",&inicio,&v,&a);
		for(int i=0;i<a;i++){
			scanf("%d%d",&x,&y);
			lista[x].insert(y);
			lista[y].insert(x);
		}
		DFS(inicio);
		for(int i=0;i<50;i++){
			lista[i].clear();
		}
		printf("%d\n",cont*2);
	}
	return 0;
}
