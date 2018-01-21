/*UVa - 10346 - Peter's Smokes*/

#include <bits/stdc++.h>
using namespace std;

int n,k;

int func(int pontas,int cigarros){
	if(pontas<k) return cigarros;
	return func(pontas%k+pontas/k,cigarros+=(pontas/k));
}

int main(){
	while(scanf("%d%d",&n,&k)!=EOF){
		int saida = func(n,n);
		printf("%d\n",saida);
	}
	return 0;
}
