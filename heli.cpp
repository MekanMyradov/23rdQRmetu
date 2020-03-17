// (A) Sekerkopter
#include<bits/stdc++.h>
using namespace std;
#define MAXN (int)(1e5 +2)
int pos[MAXN][3];
double distances[MAXN];

void findDistance(int n){
	for(int i=0; i<n; i++){
		long long x= pos[i][0];
		long long y= pos[i][1];
		long long z= pos[i][2];
		
		distances[i] = (double)sqrt(x*x + y*y + z*z);
	}
	
//	for(int i=0; i<n; i++) printf("%lf ",distances[i]);
//	printf("\n");
	return ;
}

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++) {
		int x,y,z;
		scanf("%d %d %d",&x,&y,&z); 
		pos[i][0] = x;
		pos[i][1] = y;
		pos[i][2] = z;	
	}
int cnt = 0;

double mid = m/2.0;

	findDistance(n);

	for(int i=0; i<n; i++)
		if(distances[i] <= mid) cnt++;
	
	printf("%d",cnt);
	
	return 0;
}
