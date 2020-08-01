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
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin>>arr[i][j];
			}
		}
		vector<vector<int>> v(n + m - 1,vector<int>(2) );
		int moves=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				v[i + j][arr[i][j]]++;
			}
		}
		for (int i = 0; i < v.size(); ++i)
		{
			int j=n+m-2-i;
			if(i>j)
				moves+= min(v[i][0] + v[j][0], v[i][1] + v[j][1]);
		}
		cout<<moves<<endl;
	}
	return 0;
}

