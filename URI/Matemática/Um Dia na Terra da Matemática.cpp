/*
 * URI - 1570 - Um Dia na Terra da Matemática
 * https://www.urionlinejudge.com.br/judge/pt/runs/code/10889780
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll b,c,p,q,x,y;

void func(ll y1){
	long double x1 = (p - y1*y1)/(long double)y1;
	if(x1 == (ll)x1 && x1 >= y1){
		if(x < y or x1 < x){
			x = x1;
			y = y1;
		}
	}
}

int main(){
	int n,cont = 1;
	scanf("%d",&n);
	while(n--){
		scanf("%lld%lld",&p,&q);
		x = -1; y = 1;
		printf("Case %d:\n",cont++);
		b = ((-q) - 3 * p);
		c = p * p;
		ll delta = b*b - 8 * c;
		if(delta < 0){
			printf("Impossible.\n");
			continue;
		}
		long double t = sqrt(delta);
		if(t != (ll)t){
			printf("Impossible.\n");
			continue;
		}
		long double t1 = ((-b) + t)/(long double)4;
		long double t2 = ((-b) - t)/(long double)4;
		if(t1 == 0 or t2 == 0){ // y é 0
			if(q >= 0 && p == 0){
				long double aux = sqrt(q);
				if(aux == (ll)aux){
					if(x < y or aux < x){
						y = 0;
						x = aux;
					}
				}
			}
		}
		if(t1 > 0 && t1 == (ll)t1){
			long double y1 = sqrt(t1);
			if(y1 == (ll)y1){
				func(y1);
				func(-y1);
			}
		}
		if(t2 > 0 && t2 == (ll)t2){
			long double y2 = sqrt(t2);
			if(y2 == (ll)y2){
				func(y2);
				func(-y2);
			}
		}
		if(x >= y){
			printf("%lld %lld\n",x,y);
			continue;
		}
		printf("Impossible.\n");
	}
	return 0;
}
