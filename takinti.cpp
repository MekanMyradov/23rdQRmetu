// (B) Takintili Numaralandirma
#include<bits/stdc++.h>
using namespace std;
#define N 103
#define K 903
long long dp[N][K];
#define mod (long long)(1e9 +7)

long long func(int n, int k){
	if(n==0 && k==0) return 1LL;
	if(n==0 && k!=0) return 0LL;

	if(dp[n][k]!=-1) return (dp[n][k] % mod);
	
	long long res = 0LL;
	for(int i=0; i<10; i++) if(k-i >= 0) res+=(func(n-1, k-i) % mod);
	
	dp[n][k] = (res % mod);
	return (dp[n][k] % mod);
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
long long res = 0LL;	
	for(int i=1; i<=n; i++){
		
		for(int x=0; x<N; x++) for(int y=0; y<K; y++) dp[x][y] = -1LL;
		
		long long tmp = 0LL;
		for(int j=1; j<=9; j++) if(k-j >= 0) tmp += (func(i-1, k-j) % mod);
		res += (tmp % mod);
		res%=mod;		
	}
	
	printf("%lld",res);
	
	return 0;
}
