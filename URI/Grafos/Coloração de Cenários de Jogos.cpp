/*URI - 1907 - Coloração de Cenários de Jogos*/

#include <bits/stdc++.h>
using namespace std;

char matriz[2000][2000];
int n,m;
int a[] = {-1,0,0,1};
int b[] = {0,-1,1,0};

void flood(int i,int j){
	if(i<0||j<0||i>=n||j>=m||matriz[i][j]!='.')
		return;
	matriz[i][j] = 'o';
	for(int k=0;k<4;k++){
		flood(i+a[k],j+b[k]);
	}
}

int main(){
	int cont = 0;
	//~ freopen("entrada","r",stdin);
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf(" %c",&matriz[i][j]);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matriz[i][j]=='.'){
				cont++;
				flood(i,j);
			}
		}
	}
	printf("%d\n",cont);
	return 0;
}
