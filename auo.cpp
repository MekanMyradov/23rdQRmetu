// (G) Azimli Uzayli Osman
#include<bits/stdc++.h>
using namespace std;
#define MAXN 102
int arr[MAXN];

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++) scanf("%d",&arr[i]);
	
	for(int i=m-1; i>=1; i--){
		int sum = 0;
		for(int j=0; j<n; j++) sum += i^arr[j];
		if(sum<=m) { printf("%d",i); return 0; } 
	}	
	
	printf("-1");
	
	return 0;
}
