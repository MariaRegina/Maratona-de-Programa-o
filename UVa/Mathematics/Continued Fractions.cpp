/*
 * UVa - 834 - Continued Fractions
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=775
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF){
		int c = a/b;
		printf("[%d;",c);
		int aux = a - b * c;
		a = b; b = aux;
		while(a != 1){
			c = a/b;
			aux = a - b*c;
			a = b;
			b = aux;
			if(a != 1) printf("%d,",c);
			else printf("%d]\n",c);
		}
	}
	return 0;
}
