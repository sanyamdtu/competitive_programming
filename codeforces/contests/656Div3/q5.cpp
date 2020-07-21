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
		int n;
		cin>>n;
		int arr[2][n];
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>arr[i][j];
			}
		}
		int vis[2][n+1];
		memset(vis,0,sizeof(vis));
		for (int i = 0; i < n; ++i)
		{
			vis[0][arr[i][0]]++;
			vis[1][arr[i][1]]++;
		}		
		set<int> s1,s2;
		for (int i = 1; i < n+1; ++i)
		{
			if(arr[0][i]>1)
				s1.insert(i);
			if(arr[1][i]>1)
				s2.insert(i);
		}
		int cost=0;
		for (int i = 0; i < n; ++i)
		{
			if(s1.find(arr[0][i])&&a)
		}
	}

	return 0;
}