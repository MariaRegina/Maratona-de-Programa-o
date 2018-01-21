#include <bits/stdc++.h>
using namespace std;

struct dentista{
	int inicio,fim;
};

bool comp(dentista a, dentista b){
	return a.fim<b.fim;
}

int main(){
	int n;
	stack <dentista> fila;
	//~ freopen("entrada","r",stdin);
	scanf("%d",&n);
	dentista vet[n],aux;
	for(int i=0;i<n;i++)
		scanf("%d%d",&vet[i].inicio,&vet[i].fim);
	sort(vet,vet+n,comp);
	fila.push(vet[0]);
	for(int i=1;i<n;i++){
		aux = fila.top();
		if(vet[i].inicio>=aux.fim)
			fila.push(vet[i]);
	}
	printf("%d",(int)fila.size());
	return 0;
}
