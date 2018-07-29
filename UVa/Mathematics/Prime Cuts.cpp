/*
 * UVa - 406 - Prime Cuts
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=347
 */

#include <bits/stdc++.h>
using namespace std;

int v[1010],vet[1010];

void crivo(){
	v[0] = 1;
	for(int i=2;i<1010;i++){
		if(!v[i]){
			for(int j=2; i*j <= 1000; j++) v[i*j] = 1;
		}
	}
}

int main(){
	int n,c,cont;
	crivo();
	while(scanf("%d%d",&n,&c) != EOF){
		cout<<n<<" "<<c<<":";
		cont = 0;
		for(int i=1;i<=n;i++){
			if(v[i] == 0) vet[cont++] = i;
		}
		int aux;
		if((cont % 2 == 0 and cont < c*2) or (cont % 2 and cont < c*2-1)){
			for(int i=0;i<cont;i++){
				cout<<" "<<vet[i];
			}
			puts("\n");
			continue;
		}
		if(cont % 2){ // 2C-1
			aux = cont - (2*c-1);
			for(int i=aux/2,j = 0;j<(2*c-1); i++,j++){
				cout<<" "<<vet[i];
			}
		}else{
			aux = cont - (2*c);
			for(int i=aux/2, j = 0; j<2*c; i++, j++){
				cout<<" "<<vet[i];
			}
		}
		puts("\n");
	}
	return 0;
}
