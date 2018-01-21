/*URI 1975 - Pérolas*/

#include <bits/stdc++.h>
using namespace std;

struct aluno{
	int erros;
	string nome_aluno;
};

bool comparar(aluno a,aluno b){
	return a.erros>b.erros;
}

int main(){
	int p,a,r,k;
	//~ freopen("entrada","r",stdin);
	while(scanf("%d%d%d",&p,&a,&r)&&(p||a||r)){
		set <string> perolas;
		aluno vet[a+1];
		string saida[a+1];
		char nome[100],resposta_errada[1001],resposta_aluno[1001];
		for(int i=0;i<p;i++){
			scanf(" %[^\n]",resposta_errada);
			perolas.insert(resposta_errada);
		}
		for(int i=0;i<a;i++){
			scanf(" %[^\n]",nome);
			int aux;
			for(k=0;k<a&&vet[k].nome_aluno!=nome;k++);
			if(k==a){
				vet[i].nome_aluno = nome;
				vet[i].erros = 0;
				aux = i;
			}else{
				aux=k;
				i--; a--;
			}
			for(int j=0;j<r;j++){
				scanf(" %[^\n]",resposta_aluno);
				if(perolas.find(resposta_aluno)!=perolas.end()){
					vet[aux].erros++;
				}
			}
		}		
		sort(vet,vet+a,comparar);
		int j=1;
		saida[0] = vet[0].nome_aluno;
		for(int i=1;vet[i].erros==vet[i-1].erros;i++,j++){
			saida[j] = vet[i].nome_aluno; 
		}
		sort(saida,saida+j);
		cout<<saida[0];
		for (int i = 1; i < j; i++){
			//if(saida[i]!=saida[i-1])
			cout<<", "<<saida[i];
		}
		puts("");
	}
	return 0;
}
