/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3946
 * UVa - 12502 - Three Families
 * */


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int n,x,y,z;
	double saida;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&x,&y,&z);
		saida = (double)z/(x+y);
		saida = x*saida + (x-y)*saida;
		printf("%.0f\n",saida);
	}
	return 0;
}
