#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
#define max 100001
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	ll sieve[max];
	for (int i = 0; i < max; ++i)
	{
		sieve[i]=0;
	}
	for (int i = 2; i < max; ++i){
		if(sieve[i]==0)
		for (int j =i; j < max; j+=i)
			sieve[j]++;
	}
	int ans[max][6];
	for (int i = 0; i < max; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			ans[i][j]=0;
		}
	}
	for (int i = 0; i < max; ++i)
	{
		if(sieve[i]<=5)
		ans[i][sieve[i]]++;
	}
	for (int i = 1; i < max; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			ans[i][j]+=ans[i-1][j];
		}
	}
	while (t--)
	{
		int a,b,k;
		cin>>a>>b>>k;
		cout<<ans[b][k]-ans[a-1][k]<<endl;
	}
	return 0;
}