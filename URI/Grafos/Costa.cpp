/*URI - 2419 - Costa*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	//~ freopen("entrada","r",stdin);
	scanf("%d%d",&n,&m);
	char texto[n][m];
	for (int i = 0; i < n; i++){
		for(int j = 0;j<m;j++){
			scanf(" %c",&texto[i][j]);
		}
	}
	int cont = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(texto[i][j]=='#'){
				if(i-1==-1||j-1==-1||i+1==n||j+1==m){
					cont++;
					continue;
				}else{
					if(texto[i-1][j]=='.'||texto[i][j-1]=='.'||texto[i][j+1]=='.'||texto[i+1][j]=='.'){
						cont++;
						continue;
					}
				}
			}
		}
	}
	printf("%d\n",cont);
	return 0;
}
