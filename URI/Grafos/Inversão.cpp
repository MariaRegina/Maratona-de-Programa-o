/*URI - 1550 - Inversão*/

#include <bits/stdc++.h>
using namespace std;

int n,a,b;
int visitado[50000];
int nivel[500000];

int inverter(int x){
	int s=0;
	while(x!=0){
		s += (x%10);
		s *= 10;
		x /= 10;
	}
	return s/10;
}

void func(){
	queue <int> fila;
	fila.push(a);
	while(!fila.empty()){
		int atual = fila.front();
		fila.pop();
		int aux = inverter(atual);
		if(!visitado[atual+1]&&atual+1<=10000){
			visitado[atual+1] = 1;
			fila.push(atual+1);
			nivel[atual+1] = nivel[atual]+1;
			if(atual+1==b)
				return;
		}
		if(!visitado[aux]&&aux<=10000){
			fila.push(aux);
			visitado[aux] = 1;
			nivel[aux] = nivel[atual]+1;
			if(aux==b)
				return;
		}
	}
}

int main(){
	//~ freopen("entrada","r",stdin);
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		memset(visitado,0,sizeof visitado);
		memset(nivel,-1,sizeof nivel);
		nivel[a] = 0;
		func();
		printf("%d\n",nivel[b]);
	}
	return 0;
}
