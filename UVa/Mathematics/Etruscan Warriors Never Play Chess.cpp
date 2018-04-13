/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2661
 * UVa - 11614 - Etruscan Warriors Never Play Chess
 * */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
using namespace std;
typedef long long int ll;

int main(){
	/*
	 * (a*(a+1))/2 = s
	 * => a^2 + a -2s = 0
	 * */
	int n;
	ll a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&a);
		ll saida = (-1+sqrt(1+8*a))/2;
		printf("%lld\n",saida);
	}
	return 0;
}

