#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		int dp[n];
		memset(dp,0,sizeof(dp));
		int z=x;
		while(dp[z]!=1){
			dp[z]=1;
			if(z==y)
				break;
			z=(z+k)%n;
		}
		if(dp[y]==1)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}