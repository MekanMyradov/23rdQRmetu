// (I) cigliklar ve naralar
#include<bits/stdc++.h>
using namespace std;

string rev(string s){
	string tmp = "";
	int len = s.length();
	for(int i=len-1; i>=0; i--) tmp+=s[i];
	return tmp;
}

int func(string &s){
	int len = s.length();
	if(len<4) return 0;
	int window = len - (len%4);		// 22-2=20
	
	for(int i=window; i>=4; i-=4){
		for(int j=0; j<=len-i; j++){
			string tmp = "";
			for(int k=j; k<j+i; k++) tmp+= s[k];
			if(rev(tmp)==tmp){
				string s1 = "";
				string s2 = "";
				for(int x=0; x<i/4; x++) s1+=tmp[x];
				for(int x=(i/2)-1; x>=i/4; x--) s2+=tmp[x];
				if(s1==s2) return i;
			}  
		}
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	while(t--){
		string s;
		cin>>s;
		printf("%d\n",func(s));
	}
	
	
	return 0;
}
