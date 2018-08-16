/*
 * UVa - 11689 - Soda Surpler
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2736
 */

#include <bits/stdc++.h>
using namespace std;

int t,e,f,c,ans;

void func(int n){
	if(n < c) return;
	ans += n/c;
	func(n%c + n/c);
}

int main(){
	scanf("%d",&t);
	while(t--){
		ans = 0;
		scanf("%d%d%d",&e,&f,&c);
		func(e+f);
		printf("%d\n",ans);
	}
	return 0;
}
