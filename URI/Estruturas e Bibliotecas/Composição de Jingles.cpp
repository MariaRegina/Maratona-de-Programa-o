/*
 * URI - 1430 - Composição de Jingles
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1430
 */


#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont = 0;
	map <char,float> mapa;
	mapa['W'] = 1;
	mapa['H'] = (float)1/2;
	mapa['Q'] = (float)1/4;
	mapa['E'] = (float)1/8;
	mapa['S'] = (float)1/16;
	mapa['T'] = (float)1/32;
	mapa['X'] = (float)1/64;
	char texto[201];
	float soma = 0;
	while(scanf(" %s",texto),texto[0]!='*'){
		for(int i=1;texto[i];i++){
			if(texto[i]!='/'){
				soma += mapa[texto[i]];
				//~ printf("soma = %.2f\n",soma);
			}else{
				if(soma==1.0){
					cont++;
				}
				soma = 0;
			}
		}
		printf("%d\n",cont);
		cont = 0;
	}
}
