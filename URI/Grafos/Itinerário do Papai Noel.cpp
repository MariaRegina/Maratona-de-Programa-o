/*URI - 1764 - Itinerário do Papai Noel*/

#include <bits/stdc++.h>
using namespace std;

int m,n,pai[40001];

struct aresta{
	int a,b,peso;
};

aresta vet[50000];

bool comp(aresta x,aresta y){
	return x.peso<y.peso;
}

int find(int x){
	if(pai[x]==x) return x;
	return pai[x] = find(pai[x]);
}

bool uniao(int x,int y){
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
	//~ freopen("entrada","r",stdin);
	while(scanf("%d%d",&m,&n),m||n){
		int soma = 0;
		for(int i=0;i<m;i++) pai[i] = i;
		for(int i=0;i<n;i++)
			scanf("%d%d%d",&vet[i].a,&vet[i].b,&vet[i].peso);
		sort(vet,vet+n,comp);
		for(int i=0;i<n;i++){
			if(uniao(vet[i].a,vet[i].b)) soma += vet[i].peso;
		}
		printf("%d\n",soma);
	}
	return 0;
}
