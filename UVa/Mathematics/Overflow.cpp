/*
 * UVa - 465
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=406
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll func(string a){
	ll s = 0;
	ll aux = 1;
	for(int i = (int)a.size()-1; i >= 0; i--){
		s += ((a[i]-'0') * aux);
		aux *= 10;
	}
	return s;
}

int main(){
	string a,b;
	string maior = "2147483647";
	char c;
	int i;
	bool x,y;
	ll aux1, aux2;
	while(cin>>a>>c>>b){
		x = y = false;
		cout<<a<<" "<<c<<" "<<b<<endl;
		for(i=0; a[i] && a[i] == '0'; i++);
		if(i) a.erase(a.begin(), a.begin() + i);
		for(i=0; b[i] && b[i] == '0'; i++);
		if(i) b.erase(b.begin(), b.begin() + i);
		if(((int)a.size() > 10) or ((int)a.size() == 10 && a > maior)){
			cout<<"first number too big"<<endl;
			x = true;
		}
		if(((int)b.size() > 10) or ((int)b.size() == 10 && b > maior)){
			cout<<"second number too big"<<endl;
			y = true;
		}
		if((x or y) and (c == '+')){
			cout<<"result too big"<<endl;
			continue;
		}
		aux1 = func(a);
		aux2 = func(b);
		if(c == '+' && aux1 + aux2 > INT_MAX){
			cout<<"result too big"<<endl;
			continue;
		}
		if(c == '+') continue;
		if(aux1 == 0 or aux2 == 0) continue;
		if(x or y){
			cout<<"result too big"<<endl;
			continue;
		}
		if(floor(log10(aux1) + log10(aux2)) + 1 > 10){
			cout<<"result too big"<<endl;
			continue;
		}
		if(aux1 * aux2 > INT_MAX){
			cout<<"result too big"<<endl;
			continue;
		}
	}
	return 0;
}

