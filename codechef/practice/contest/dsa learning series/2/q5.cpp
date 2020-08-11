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
		set<pair<int,pair<int,int>>> s;
		map<pair<int,int>,bool> ma;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin>>arr[i][j];
				s.insert({arr[i][j],{i,j}});
				ma[{i,j}]=true;
			}
		}		
		for(auto i:s){
			auto p=i.second;
			ma[p]=false;
			if(p.first!=n-1)
				ma[{p.first+1,p.second}]=true;
			if(p.second!=m-1&&p.first!=n-1)
				ma[{p.first+1,p.second+1}]=true;
			if(p.second!=0&&p.first!=n-1)
				ma[{p.first+1,p.second-1}]=true;
		}
		char ans[n][m];
		memset(ans,'1',sizeof(ans));
		for(auto i:ma){
			auto p=i.first;
			if(i.second)
				ans[p.first][p.second]='0';
		}	
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout<<ans[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}