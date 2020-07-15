#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n;
	cin>>n;
	string s,a,res,temp;
	res="";
	temp=res;
	cin>>s;
	a="RGB";
	int j=0;
	int ans=INT_MAX;
	int cost=0;
	for (int i = 0; i < n; ++i,j=(j+1)%3){
		if(a[j]!=s[i]){
			
			cost++;
		}
		temp+=a[j];
	}
	if(ans>cost){
		ans=min(ans,cost);
		res=temp;
	}
	cost=0;
	temp="";
	a="RBG";
	j=0;
	for (int i = 0; i < n; ++i,j=(j+1)%3){
		if(a[j]!=s[i])
			cost++;
		temp+=a[j];
	}
	if(ans>cost){
		ans=min(ans,cost);
		res=temp;
	}
	cost=0;
	temp="";
	a="GRB";
	j=0;
	for (int i = 0; i < n; ++i,j=(j+1)%3){
		if(a[j]!=s[i])
			cost++;
		temp+=a[j];
	}
	if(ans>cost){
		ans=min(ans,cost);
		res=temp;
	}
	cost=0;
	temp="";
	a="GBR";
	j=0;
	for (int i = 0; i < n; ++i,j=(j+1)%3){
		if(a[j]!=s[i])
			cost++;
		temp+=a[j];
	}
	if(ans>cost){
		ans=min(ans,cost);
		res=temp;
	}
	cost=0;
	temp="";
	a="BGR";
	j=0;
	for (int i = 0; i < n; ++i,j=(j+1)%3){
		if(a[j]!=s[i])
			cost++;
		temp+=a[j];
	}
	if(ans>cost){
		ans=min(ans,cost);
		res=temp;
	}
	cost=0;
	temp="";
	a="BRG";
	j=0;
	for (int i = 0; i < n; ++i,j=(j+1)%3){
		if(a[j]!=s[i])
			cost++;
		temp+=a[j];
	}
	if(ans>cost){
		ans=min(ans,cost);
		res=temp;
	}
	cout<<ans<<endl<<res;
	return 0;
}