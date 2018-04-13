/*
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1222
 * UVa - 10281 - Average Speed
 * */

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include <sstream>
using namespace std;

int main(){
	int h,m,s;
	double tempo = 0,inicio = 0,velocidade = 0,distancia = 0;
	string vai,aux;
	bool gamb = true;
	//~ freopen("in","r",stdin);
	while(getline(cin,vai)){
		aux = vai.substr(0,2);
		stringstream conv_h(aux);
		conv_h >> h;
		aux = vai.substr(3,2);
		stringstream conv_m(aux);
		conv_m >> m;
		aux = vai.substr(6,2);
		stringstream conv_s(aux);
		conv_s >> s;
		tempo = h+(double)m/60+(double)s/60/60;
		if((int)vai.size()>8){
			if(gamb){
				gamb = false;
				aux = vai.substr(9,(int)vai.size()-9);
				stringstream conv_v(aux);
				conv_v >> velocidade;
			}else{
				distancia += (tempo-inicio)*velocidade;
			}
			inicio = tempo;
			aux = vai.substr(9,(int)vai.size()-9);
			stringstream conv_v(aux);
			conv_v >> velocidade;
		}else{
			cout<<vai;
			printf(" %.2f km\n",distancia+(tempo-inicio)*velocidade);
		}
	}
	return 0;
}
