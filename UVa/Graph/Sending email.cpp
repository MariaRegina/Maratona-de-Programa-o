// UVa - 10986 - Sending email

#include <bits/stdc++.h>
using namespace std;

#define MAXN 50000
typedef pair <int,int> pii;
int n,arestas,vertices,saida,fim,distancia[MAXN],visitado[MAXN];
vector <pii> vizinhos[MAXN];

void dijkstra(){
	
	for(int i=0;i<vertices;i++)
		distancia[i] = INT_MAX; // define a distancia como infinito para todos os vertices
	distancia[saida] = 0; // distancia para o vertice de saida = a zero;
	
	priority_queue< pii, vector<pii>, greater<pii> > fila; // distancia e vertice nessa ordem
	fila.push(pii(distancia[saida],saida));
	
	while(1){
		int davez = -1;
		while(!fila.empty()){
			int atual = fila.top().second; // pego o vertice
			fila.pop();
			if(!visitado[atual]){ // se ele não tiver sido visitado 
				davez = atual;
				break;
			}
		}
		if(davez==-1) break; //acabaram os vertices ou não tem caiminho 
		visitado[davez] = true; // visito o vértice
		for(int i=0;i<(int)vizinhos[davez].size();i++){ // iterar a quantidade de vizinhos que o vertice davez tem
			int dist = vizinhos[davez][i].first; // peso do vertice vizinho
			int atual = vizinhos[davez][i].second; // vertice vizinho
			if(distancia[atual]>distancia[davez]+dist){ // ve se compensa atualizar a distancia
				distancia[atual] = distancia[davez]+dist;
				fila.push(pii(distancia[atual],atual)); // atualiza a distancia do vertice
			}
		}
	}
}

int main(){
	int x,y,peso,cont = 1;
	//~ freopen("entrada","r",stdin);
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d",&vertices,&arestas,&saida,&fim);
		for(int i=0;i<arestas;i++){
			scanf("%d%d%d",&x,&y,&peso);
			vizinhos[x].push_back(pii(peso,y));
			vizinhos[y].push_back(pii(peso,x));
		}
		memset(visitado,0,sizeof visitado);
		dijkstra();
		printf("Case #%d: ",cont++);
		if(distancia[fim]!=INT_MAX) printf("%d\n",distancia[fim]);
		else printf("unreachable\n");
		memset(vizinhos,0,sizeof vizinhos);
	}
	return 0;
}
