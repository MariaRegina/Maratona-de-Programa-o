/*UVa - 616 - Coconuts, Revisited */

#include <bits/stdc++.h>
using namespace std;

int cont,maior,saida;

void func(int i,int cocos){
	if ((cocos/i*(i-1))%i==1){
		cont++;
		func(i,cocos/i*(i-1));
	}
	if((cocos/i*(i-1))%i==0&&cont==i){
		maior = i;
	}
}

int main(){
	int n;
	//~ freopen("entrada","r",stdin);
	while(scanf("%d",&n)&&n>=0){
		maior = saida = -1;
		for(int i=2;i<sqrt(n);i++){
			cont = 1;
			if(n%i==1){
				func(i,n);
				if (maior>saida) saida = maior;
				func(n/i,n);
				if (maior>saida) saida = maior;
			}
		}
		
		if (n==3) maior = 2;
		if (maior!=-1) printf("%d coconuts, %d people and 1 monkey\n",n,maior);
		else printf("%d coconuts, no solution\n",n);
	}
	return 0;
}
