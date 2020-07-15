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
	string s;
	cin>>s;
	int vis[n];
	// memset(vis,1,sizeof(s));
	for (int i = 0; i < n; ++i)
	{
		vis[i]=1;
	}
	int j=0,c=0,i=1;
	while(j<n&&i<n)
	{
		// cout<<i<<" "<<j<<endl;
			if(c%2==0){
				while(i<n&&s[j]==s[i]){
					vis[i]=0;
					i++;
				}
			}
			j++;
			i++;
			while(j<n&&vis[j]!=1)
				j++;
			c++;
	}
	string ans="";
	for (int i = 0; i < n; ++i)
	{
		if(vis[i]==1)
			ans+=s[i];
	}
	if(ans.length()%2!=0)ans.pop_back();
	cout<<n-ans.length()<<endl;
	cout<<ans;
	return 0;
}