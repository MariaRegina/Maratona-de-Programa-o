/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3301
 * UVa - 12149 - Feynman
 * */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll vet[101],soma;

ll func(int a) {
	if(vet[a] != 0){
		return vet[a];
	}
	return vet[a] = func(a-1)+a*a;
}

int main(){
	int n;
	memset (vet,0,sizeof vet);
	vet[1] = 1;
	vet[2] = 5;
	while(scanf("%d",&n),n){
		soma = 0;
		cout<<func(n)<<endl;
	}
	return 0;
}
