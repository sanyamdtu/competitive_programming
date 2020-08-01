#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m,s;
	cin>>m>>s;
	string mini,maxi;
	mini=maxi="";
	if(9*m<s||s==0){

		mini="-1";
		maxi="-1";
		if(s==0&&m==1)
			maxi=mini="0";
	}
	else {
		int v=s;
		while(s!=0){
			char ch='0'+min(s,9);
			maxi+=ch;
			
			s-=min(9,s);
		}
		
		while(maxi.length()<m){
			maxi+='0';
		}

		while(v!=0){
			char ch;
			if(mini.length()<m-1){
				ch='0'+min(v-1,9);
				v-=min(9,v-1);
			}
			else{
				ch='0'+min(v,9);
				v-=min(9,v);
			}
			mini+=ch;
		}
		while(maxi.length()<m-1){
			mini+='0';
		}
		if(maxi.length()<m)
		 mini+='1';
		reverse(mini.begin(), mini.end());
	}
	cout<<mini<<" "<<maxi;
	return 0;
}