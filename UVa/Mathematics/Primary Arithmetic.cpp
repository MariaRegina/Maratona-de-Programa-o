/*
 * UVa - 10035 - Primary Arithmetic
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=976
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	int aux,cont;
	while(cin >> a >> b && (a != "0" or b != "0")){
		cont = 0;
		if(a.size() != b.size()){
			if(a.size() < b.size()){
				aux = a.size();
				while(aux != (int)b.size()){
					aux++;
					a = '0'+a;
				}
			}else{
				aux = b.size();
				while(aux != (int)a.size()){
					aux++;
					b = '0'+b;
				}
			}
		}
		char carry[(int)a.size()+2];
		memset(carry,'0',sizeof carry);
		for(int i=(int)a.size(); i>=0;i--){
			if(a[i]-'0' + b[i]-'0' + carry[i]-'0' > 9){
				carry[i-1] = '1';
				cont++;
			}
		}
		if(cont == 0){
			cout<<"No carry operation."<<endl;
		}else if(cont == 1){
			cout<<"1 carry operation."<<endl;
		}else cout<<cont<<" carry operations."<<endl;
	}
	return 0;
}
