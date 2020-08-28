#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		int n,m,sx,sy;
		cin>>n>>m>>sx>>sy;
		cout<<sx<<" "<<sy<<endl;
		vector<pair<int,int>> v;
		for (int i = sy-1; i>=1; --i)
		{
			v.pb({sx,i});
		}
		for (int i = sy+1; i <=m ; ++i)
		{
			v.pb({sx,i});
		}
		int f=0;
		for (int i = sx-1; i >=1 ;--i)
		{
			if(f==0){
				for (int j = m; j>=1 ; --j)
				{
					v.pb({i,j});
				}
			}
			else
			{
				for (int j = 1; j<=m ; ++j)
				{
					v.pb({i,j});
				}	
			}
			f=1-f;
		}
		for (int i = sx+1; i <=n ; ++i)
		{
			if(f==0){
				for (int j = m; j>=1 ; --j)
				{
					v.pb({i,j});
				}
			}
			else
			{
				for (int j = 1; j<=m ; ++j)
				{
					v.pb({i,j});
				}	
			}
			f=1-f;	
		}
		for (int i = 0; i < v.size(); ++i)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
	
	return 0;
}