/*Jogo de Boca - URI - 2667*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	char numero[1000];
	int soma = 0;
	scanf(" %s",numero);
	for(int i=0;numero[i];i++){
		soma += (numero[i]-48);
	}
	printf("%d\n",soma%3);
	return 0;
}
