// (D) Uzlasmali Boyacilar
#include<bits/stdc++.h>
using namespace std;
int main(){
	int d;
	scanf("%d",&d);
	while(d--){
		int n,m;
		scanf("%d %d",&n,&m);
		int ndiv2 = n/2;
		int mdiv2 = m/2;
		long long cnt2x2 = (long long)ndiv2 * mdiv2;
		long long ozi = cnt2x2/2;
		long long mecem = cnt2x2/2;
		if(cnt2x2%2==1) ozi++;	
		long long extra = ((long long)m*n) - (cnt2x2 *4);
		long long ozitotal = ozi *4;
		long long mecemtotal = (mecem *4) + extra;
		
		if(ozitotal==mecemtotal) printf("yes\n");
		else if(ozitotal > mecemtotal) printf("ozi\n");
		else printf("mecem\n");
	}
	
	return 0;
}
