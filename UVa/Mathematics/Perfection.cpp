/*UVa - 382 - Perfection*/

#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
	vector <pair<int,int> > v;
	printf("PERFECTION OUTPUT\n");
	//~ freopen("entrada","r",stdin);
	while(scanf("%d",&n),n){
		int soma = 1;
		double raiz = sqrt(n);
		for(int i=2;i<raiz;i++){
			if(n%i==0) soma += (i+n/i);
		}
		if(raiz-(int)raiz==0)
			if(n%(int)raiz==0) soma += raiz;
		if(n==1) soma = 0;
		if(soma == n) printf("%5d  PERFECT\n",n);
		else if (soma<n) printf("%5d  DEFICIENT\n",n);
		else printf("%5d  ABUNDANT\n",n);
	}
	printf("END OF OUTPUT\n");
	return 0;
}
