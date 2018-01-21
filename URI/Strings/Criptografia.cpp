/*URI - 1024 - Criptografia*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	//~ freopen("entrada","r",stdin);
	cin>>n;
	char texto[1001];
	while(n--){
		scanf(" %[^\n]%n",texto,&t);
		t--; t--;
		char aux;
		for(int i=0;texto[i];i++)
			if((texto[i]>='a'&&texto[i]<='z')||(texto[i]>='A'&&texto[i]<='Z'))
				texto[i]+=3;
		for(int i=0, j=t;i<=t/2;i++,j--){
			aux = texto[i];
			texto[i] = texto[j];
			texto[j] = aux;
		}
		if(t%2!=0) t++;
		for(int i=t/2;texto[i];i++)
			texto[i]--;
		printf("%s\n",texto);
	}
	return 0;
}
