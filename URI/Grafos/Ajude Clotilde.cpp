/*URI - 1910 - Ajude Clotilde*/

#include <bits/stdc++.h>
using namespace std;

int o,d,k,pro;
int nivel[500000],saida;
set <int> proibido;

void func(){
	queue <int> fila;
	fila.push(o);
	while(!fila.empty()){
		int atual = fila.front();
		fila.pop();
		if(nivel[atual+1]==-1&&proibido.find(atual+1)==proibido.end()&&atual+1<=100000){
			fila.push(atual+1);
			nivel[atual+1] = nivel[atual]+1;
			if(atual+1==d) return;
		}
		if(nivel[atual-1]==-1&&proibido.find(atual-1)==proibido.end()&&atual-1>0&&atual-1<=100000){
			fila.push(atual-1);
			nivel[atual-1] = nivel[atual]+1;
			if(atual-1==d) return;
		}
		if(atual%2==0&&nivel[atual/2]==-1&&proibido.find(atual/2)==proibido.end()&&atual/2<=100000){
			fila.push(atual/2);
			nivel[atual/2] = nivel[atual]+1;
			if(atual/2==d) return;
		}
		if(nivel[atual*2]==-1&&proibido.find(atual*2)==proibido.end()&&atual*2<=100000){
			fila.push(atual*2);
			nivel[atual*2] = nivel[atual]+1;
			if(atual*2==d) return;
		}
		if(nivel[atual*3]==-1&&proibido.find(atual*3)==proibido.end()&&atual*3<=100000){
			fila.push(atual*3);
			nivel[atual*3] = nivel[atual]+1;
			if(atual*3==d) return;
		}
	}
}

int main(){
	//~ freopen("entrada","r",stdin);
	while(scanf("%d%d%d",&o,&d,&k),o||d||k){
		saida = 1;
		proibido.clear();
		for(int i=0;i<k;i++){
			scanf("%d",&pro);
			proibido.insert(pro);
		}
		memset(nivel,-1,sizeof nivel);
		nivel[o] = 0;
		if(d>100000) printf("-1\n");
		else{
			func();
			printf("%d\n",nivel[d]);
		} 
	}
	return 0;
}
