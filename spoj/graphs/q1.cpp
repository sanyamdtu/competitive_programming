#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
bool comp(int a,int b){
	return a>b;
}
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
			for (int j = 0; j <m ; ++j)
			{
				cin>>arr[i][j];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = 1; j < m; ++j)
			{
				arr[i][j]^=arr[i][j-1];
			}
		}
		for (int i = 1; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				arr[i][j]^=arr[i-1][j];
			}
		}
		int k;
		cin>>k;
		vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				v.pb(arr[i][j]);
			}
		}
		
		sort(v.begin(), v.end(),comp);
		int f=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(arr[i][j]==v[k-1]){
					f=1;
					cout<<i+1<<" "<<j+1;
					break;
				}
			}
			if(f==1)
				break;
		}
		cout<<endl;
	}
	return 0;
}
