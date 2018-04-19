/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=307
 * UVa - 371 - Ackermann Functions
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
	if(a == 1)
		return mapa[a] = 4;
	if(mapa.find(a) != mapa.end()){
		return mapa[a];
	}else
		mapa[a] = 0;
	if(a % 2){
		mapa[a]++;
		return mapa[a] += func(a*3+1);
	}else{
		float aux = log2(a);
		if(aux == (int)aux){
			return mapa[a] = aux+1;
		}		
		mapa[a]++;
		return mapa[a] += func(a/2);
	}
}


int main(){
	int a,b;
	ll aux;
	pair<ll,int> saida;
	//~ freopen("in","r",stdin);
	while(scanf("%d%d",&a,&b), a || b){
		if(b<a) swap (a,b);
		saida.first = 0;
		for(int i=a;i<=b;i++){
			aux = func(i)-1;
			if(aux > saida.first){
				saida.first = aux;
				saida.second = i;
			}
		}
		cout<<"Between "<<a<<" and "<<b<<", "<<saida.second<<" generates the longest sequence of "<<saida.first<<" values."<<endl;
	}
	return 0;
}
