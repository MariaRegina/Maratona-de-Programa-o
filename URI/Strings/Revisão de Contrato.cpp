/*URI - 1120 - Revisão de Contrato*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	char letra,texto[102];
	//~ freopen("entrada","r",stdin);
	while(scanf(" %c %s",&letra,texto)&&(strcmp(texto,"0")!=0&&letra!='0')){
		int aux = 0;
		char saida[102];
		for(int i=0;texto[i];i++){
			if(texto[i]!=letra&&(texto[i]!='0'||aux!=0)){
				saida[aux] = texto[i];
				aux++;
			}
		}
		saida[aux] = '\0';
		if(aux==0) printf("0\n");
		else printf("%s\n",saida);
	}
	return 0;
}
