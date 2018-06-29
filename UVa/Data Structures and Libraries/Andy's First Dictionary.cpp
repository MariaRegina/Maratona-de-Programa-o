/*
 * UVa - 10815 - Andy's First Dictionary
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1756
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
	string aux;
	set<string>s;
	while(cin>>aux){
		string a = "";
		for(int i=0;aux[i];i++){
			if((aux[i] >= 'a' && aux[i] <= 'z') or (aux[i] >= 'A' && aux[i] <= 'Z')) a += tolower(aux[i]);
			else if(a != "" && i != (int)aux.size()-1){
				s.insert(a);
				a = "";
			}
		}
		if(a != "")
			s.insert(a);
	}
	for(set<string>::iterator it = s.begin(); it != s.end(); it++){
		cout<<*it<<endl;
	}
	return 0;
}
