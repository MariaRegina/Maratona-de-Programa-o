/*UVa - 272 - TEX Quotes*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	char frase[10000];
	int aux=0;
	while(scanf(" %[^\n]",frase)!=-1){
		for (int i = 0; frase[i]; i++){
			if(frase[i] == '"'){
				if(aux==0){
					printf("``");
					aux = 1;
				}else{
					printf("''");
					aux = 0;
				}
			}else{
				printf("%c",frase[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
