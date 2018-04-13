/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2986
 * UVa - 11875 - Brick Game
 * */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
using namespace std;
typedef long long int ll;

int main(){
	int t,n,aux,cont = 1;
	//~ freopen("entrada","r",stdin);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&aux);
			if(i == n/2) printf("Case %d: %d\n",cont++,aux);
		}
	}
	return 0;
}
