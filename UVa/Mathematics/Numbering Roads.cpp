/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2823
 * UVa - 11723 - Numbering Roads
 * */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
using namespace std;
typedef long long int ll;

int main(){
	int n,r,cont = 1;
	//~ freopen("entrada","r",stdin);
	while(scanf("%d%d",&n,&r),n||r){
		float letras = 0;
		letras = (float)(n-r)/r;
		printf("Case %d: ",cont++);
		if(letras != (int)letras) letras++;
		if((int)letras > 26) cout<<"impossible\n";
		else cout<<(int)letras<<endl;
	}
	return 0;
}
