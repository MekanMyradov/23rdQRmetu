// (C) Bico ve Tek sayilar
#include<bits/stdc++.h>
using namespace std;
#define MAXN (int)(1e9 -1)
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long tmp = (n-3)/2LL;
		long long res = 15LL + (tmp*30LL) + (6LL * (tmp-1)*tmp);
		
		printf("%lld\n",res);
	}
	
	
	return 0;	
}
