/*UVa - 11830 -  Contract Revision*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	char a[101],n;
	int j;
	while(scanf(" %c %s",&n,a)&&(n!='0'||a[0]!='0')){
		char saida[101];
		j = 0;
		for(int i=0;a[i];i++){
			if(a[i]!=n&&(a[i]!='0'||j!=0))
				saida[j++] = a[i];
		}
		saida[j] = '\0';
		if(j!=0) printf("%s\n",saida);
		else printf("0\n");
	}
	return 0;
}
