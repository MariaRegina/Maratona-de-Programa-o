/*
 * UVa - 10127 - Ones
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1068
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n) != EOF){
		int aux = 0,cont = 0;
		if(n == 0){
			puts("0");
			continue;
		}
		while(1){
			cont++;
			aux = (aux * 10 + 1) % n;
			if(aux == 0) break;
		}
		printf("%d\n",cont);
	}
	return 0;
}
