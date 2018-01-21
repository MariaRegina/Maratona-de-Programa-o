#include <bits/stdc++.h>
using namespace std;

int pai[101];

struct aresta{
	int x,y,distancia;
};

bool comp(aresta a, aresta b){
	return a.distancia<b.distancia;
}

int find(int x){
	if(pai[x] == x) return x;
	return pai[x] = find(pai[x]);
}

bool uniao(int x, int y){
	x = find(x);
	y = find(y);
	if(x!=y){
		if(x>y) pai[y] = x;
		else pai[x] = y;
		return true;
	}
	return false;
}

bool comparar(aresta a, aresta b){
	if (a.x<b.x) return true;
	else if (a.x==b.x&&a.y<b.y) return true;
	return false;
}

int main(){
	int vertices,arestas,cont = 1;
	//~ freopen("entrada","r",stdin);
	while(scanf("%d%d",&vertices,&arestas),vertices||arestas){
		for(int i=1;i<=vertices;i++)
			pai[i] = i;
		aresta vet[arestas],saida[vertices-1];
		for(int i=0;i<arestas;i++)
			scanf("%d%d%d",&vet[i].x,&vet[i].y,&vet[i].distancia);
		sort(vet,vet+arestas,comp);
		printf("Teste %d\n",cont++);
		int aux = 0;
		for(int i=0;i<arestas;i++){
			if(uniao(vet[i].x,vet[i].y)){
				if(vet[i].x<vet[i].y){
					saida[aux].x = vet[i].x;
					saida[aux++].y = vet[i].y;
				}
				else{
					saida[aux].x = vet[i].y;
					saida[aux++].y = vet[i].x;
				}
			}
		}
		sort(saida,saida+aux,comparar);
		for (int i = 0; i < aux; i++){
			printf("%d %d\n",saida[i].x,saida[i].y);
		}
		puts("");
	}
	return 0;
}
