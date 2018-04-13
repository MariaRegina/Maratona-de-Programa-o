/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2905
 * UVa - 11805 - Bafana Bafana*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
using namespace std;
typedef long long int ll;

int main(){
	int t,n,k,p,cont = 1;
	//~ freopen("entrada","r",stdin);
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&k,&p);
		printf("Case %d: %d\n",cont++,(k+p)%n != 0 ? (k+p)%n : n );
	}
	return 0;
}
