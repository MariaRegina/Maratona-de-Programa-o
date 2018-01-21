/*UVa - 10940 - Throwing cards away II*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	float resultado;
	while(scanf("%d",&n),n){
		resultado = log2((float)n);
		int aux,saida=0;
		aux = pow(2,(int)resultado);
		if(resultado!=(int)resultado){ /// numero está a direita, começo contar do (int)resultado até n
			for (int i = aux; i<n; i++){
				saida += 2;
			}
		}else{ /// numero é ele mesmo
			saida = n;
		}
		printf("%d\n",saida);
	}
	return 0;
}
