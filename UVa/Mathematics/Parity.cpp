/*UVa - 10931 - Parity*/

#include <bits/stdc++.h>
using namespace std;

int cont,ajuda,i;
char binario[32];

void func(int x){
	binario[i] = x%2+'0';
	if(x%2==1) cont++;
	x/=2;
	while(1){
		if(x/2==0&&x==0) break;
		i++;
		binario[i] = (x%2)+'0';
		if(x%2==1) cont++;
		if(x/2==0) break;
		x/=2;
	}
}

int main(){
	int n;
	while(scanf("%d",&n),n){
		cont = i = 0;
		func(n);
		printf("The parity of ");
		for(;i>=0;i--){
			printf("%c",binario[i]);
		}
		printf(" is %d (mod 2).\n",cont);
	}
	return 0;
}
