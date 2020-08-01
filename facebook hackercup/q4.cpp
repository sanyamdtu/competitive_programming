#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll c[1000000];
ll dp[1000000];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int l=1;l<=t;l++)
	{
		int n,m;
		cin>>n>>m;		
		for (int i = 0; i < n; ++i)
		{
			cin>>c[i];
		}
		memset(dp,0,sizeof(dp));
		c[0]=0;
		c[n-1]=0;
		multiset<ll> dps;
		int j=0,f=1;
		dp[0]=0;
		dps.insert(c[0]);
		 for (int i = 1; i < n; ++i)
		 {
			if(m<(i-j)){
				if(c[j]!=0||j==0)
				 dps.erase(dps.find(dp[j]));
				j++;
			}
			if(dps.empty()){
				f=0;
				break;
			}
			dp[i]=*(dps.begin());
			dp[i]+=c[i];
			if(c[i]!=0){
			 dps.insert(dp[i]);
			}
		 }
		cout<<"Case #"<<l<<": ";
		if(f==0)
			cout<<-1;
		else{
			cout<<dp[n-1];
		}
		cout<<endl;
	}
	return 0;
}