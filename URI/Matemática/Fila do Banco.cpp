/*
 * Fila do Banco - URI - 1537
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1537
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll vet[100100];

ll fat(int n){
	if(n == 3) return 1;
	if(vet[n]!=-1) return vet[n];
	return vet[n] = (n*fat(n-1))%1000000009;
}

int main(){
	int n;
	memset(vet,-1,sizeof vet);
	vet[4] = 4;
	while(scanf("%d",&n),n){
		cout<<fat(n)<<endl;
	}
	return 0;
}


