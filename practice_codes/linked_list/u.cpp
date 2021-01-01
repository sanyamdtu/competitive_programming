#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 998244353
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k;
	cin>>n>>k;
	int arr[n][k];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			
			cin>>arr[i][j];
		}
	}
	int p[300]={0};
	for (int i = 1; i <= n; ++i)
	{
		for (int j = i+1; j <= n; ++j)
		{
			p[i+j]++;
		}
	}
	int fact[300];
	for (int i = 1; i <=250; ++i)
	{

	}
	return 0;
}
