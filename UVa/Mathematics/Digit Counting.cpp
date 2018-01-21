/*UVa - 1225 - Digit Counting*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		int vetor[10];
		memset(vetor,0,sizeof vetor);
		int numero;
		scanf(" %d",&numero);
		for (int i = 1; i<=numero; i++){
			int n = i;
			while(n!=0){
				vetor[n%10]++;
				n = n/10;
			}
		}
		int i;
		for (i = 0; i < 9; i++){
			printf("%d ",vetor[i]);
		}
		printf("%d\n",vetor[i]);
	}
	return 0;
}
