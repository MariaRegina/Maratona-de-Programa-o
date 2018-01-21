/*URI - 2127 - Sistema Cipoviário*/

#include <bits/stdc++.h>
using namespace std;

int pai[1001];

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

int main(){
	int vertices,arestas,cont = 1,soma;
	//~ freopen("entrada","r",stdin);
	while(scanf("%d%d",&vertices,&arestas)!=EOF){
		vector <aresta> vet;
		soma = 0;
		for(int i=1;i<=vertices;i++)
			pai[i] = i;
		aresta a;
		for(int i=0;i<arestas;i++){
			scanf("%d%d%d",&a.x,&a.y,&a.distancia);
			vet.push_back(a);
		}
		sort (vet.begin(),vet.end(),comp);
		for(int i=0;i<arestas;i++){
			if(uniao(vet[i].x,vet[i].y))
				soma += vet[i].distancia;
		}
		printf("Instancia %d\n%d\n\n",cont++,soma);
	}
	return 0;
}
