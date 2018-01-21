/*UVa - 793 - Network Connections*/

#include <bits/stdc++.h>
using namespace std;

int pai[50000000];

int find(int x){
	if(pai[x]==x) return x;
	return pai[x] = find(pai[x]);
}

void uniao(int x,int y){
	x = find(x);
	y = find(y);
	if(x!=y){
		if(x>y) pai[y] = x;
		else pai[x] = y;
	}
}

int main(){
	int n,interligado,nao;
	string linha;
	//~ freopen("entrada","r",stdin);
	scanf("%d",&n);
	while(n--){
		interligado = nao = 0;
		int vertices,x,y;
		char consulta;
		scanf("%d\n",&vertices);
		for(int i=0;i<=vertices;i++) pai[i] = i;
		while(getline(cin,linha)&&!linha.empty()){
			sscanf(linha.c_str(),"%c%d%d",&consulta,&x,&y);
			if(consulta == 'c'){
				uniao(x,y);
			}else{
				int a = find(x);
				int b = find(y);
				if(a==b) interligado++;
				else nao++;
			}
		}
		printf("%d,%d\n",interligado,nao);
		if(n!=0) puts("");
	}
	return 0;
}
