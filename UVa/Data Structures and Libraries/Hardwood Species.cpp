/*UVa - 10226 -  Hardwood Species*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	//~ freopen("entrada","r",stdin);
	scanf("%d\n",&n);
	while(n--){
		int total = 0;
		string arvore;
		map <string,int> mapa;
		set <string> saida;
		set <string>::iterator it;
		char texto[31];
		while(getline(cin,arvore)&&!arvore.empty()){
			sscanf(arvore.c_str()," %[^\n]",texto);
			total++;
			if(saida.find(texto)==saida.end()){
				mapa.insert(make_pair(texto,1));
				saida.insert(texto);
			}
			else mapa[texto]++;
		}
		for(it = saida.begin();it!=saida.end();it++){
			cout<<*it<<" ";
			printf("%.4f\n",mapa[*it]*100/(float)total);
		}
		if(n!=0) puts("");
	}
	return 0;
}
