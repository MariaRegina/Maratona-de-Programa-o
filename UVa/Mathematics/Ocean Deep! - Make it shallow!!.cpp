#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	string a;
	ll v = 0;
	while(cin>>a){
		int i;
		for(i=0;a[i] && a[i] != '#';i++){
			v = (v*2 + (a[i]-'0'))%131071;
		}
		if(a[i] != '#') continue;
		if(v == 0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		v = 0;
	}
	return 0;
}

