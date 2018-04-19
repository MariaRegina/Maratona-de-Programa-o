/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=36
 * UVa - 100 - The 3n + 1 problem
 * */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <algorithm>
#include <map>
using namespace std;
typedef long long int ll;
map<int,int>mapa;

ll func(int a){
	if(a == 1) return mapa[a] = 1;
	if(mapa.find(a) != mapa.end()){
		return mapa[a];
	}else mapa[a] = 0;
	float aux = log2(a);
	if(aux == (int)aux){
		return mapa[a] = aux+1;
	}
	if(a % 2){
		mapa[a]++;
		mapa[a] += func(a*3+1);
	}else{
		mapa[a]++;
		mapa[a] += func(a/2);
	}
	return mapa[a];
}


int main(){
	int a,b;
	ll saida;
	//~ freopen("in","r",stdin);
	while(scanf("%d%d",&a,&b) != EOF){
		saida = 0;
		for(int i=min(a,b);i<=max(a,b);i++){
			saida = max(saida,func(i));
		}
		cout<<a<<" "<<b<<" "<<saida<<endl;
	}
	return 0;
}
