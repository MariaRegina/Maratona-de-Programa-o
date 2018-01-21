/*URI - 1152 - Estradas escuras*/

#include <bits/stdc++.h>
using namespace std;

int pai[200000];

struct aresta{
	int a,b,distancia;
};

bool comp(aresta x, aresta y){
	return x.distancia<y.distancia;
}

int find(int x){
	if(pai[x] == x) return x;
	return pai[x] = find(pai[x]);
}

bool uniao(int x,int y){
	x = find(x);
	y = find(y);
	if(x!=y){
		pai[x] = y;
		return true;
	}
	return false;
}

int main(){
	int vertices, arestas, total, custo;
	//~ freopen("entrada","r",stdin);
	while(scanf("%d%d",&vertices,&arestas)&&(vertices||arestas)){
		for (int i = 0; i < vertices; i++)
			pai[i] = i;
		total = custo = 0;
		aresta vet[arestas];
		for(int i=0;i<arestas;i++){
			scanf("%d%d%d",&vet[i].a,&vet[i].b,&vet[i].distancia);
			total += vet[i].distancia;
		}
		sort(vet,vet+arestas,comp);
		for(int i=0;i<arestas;i++){
			if(uniao(vet[i].a,vet[i].b)){
				custo += vet[i].distancia;
			}
		}
		printf("%d\n",total-custo);
	}
	return 0;
}
