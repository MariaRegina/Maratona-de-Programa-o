/*URI - 1081 - DFSr - Hierarquia de Profundidade*/

#include <bits/stdc++.h>
using namespace std;

int cont = 0;
int matriz[20][20],v;
int lbl[20],espacos,gambiarra;

void parthR(int vertice){
	lbl[vertice] = cont++;
	espacos += 2;
	for(int w = 0; w<v; w++){
		if(matriz[vertice][w]==1){ // 0 4
			if(espacos==2&&gambiarra) puts("");
			if(lbl[w]==-1){ // 4 não é diferente
				for(int i=0;i<espacos;i++) printf(" ");
				printf("%d-%d pathR(G,%d)\n",vertice,w,w);
				parthR(w);
			}else{
				if(matriz[vertice][w]==1&&lbl[w]!=-1){ // 0 e 4
					for(int i=0;i<espacos;i++) printf(" ");
					printf("%d-%d\n",vertice,w);
				}
			}
		}
	}
	espacos -= 2;
}

int main(){
	int a,x,y,n,casos = 0;
	//~ freopen("entrada","r",stdin);
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&v,&a);
		cont = espacos = gambiarra = 0;
		memset(matriz,0,sizeof matriz);
		memset(lbl,-1,sizeof lbl);
		for(int i=0;i<a;i++){
			scanf("%d %d",&x,&y);
			matriz[x][y] = 1;
		}
		printf("Caso %d:\n",++casos);
		parthR(0);
		for(int i=1;i<v;i++)
			if(lbl[i]==-1){
				gambiarra = 1;
				parthR(i);
			}
		puts("");
	}
	return 0;
}
