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
	map<pair<int,int>,list<pair<int,int>>> g;
	for (int i = 1; i <= 8; ++i)
	{
		for (int j = 1; j <= 8 ; ++j)
		{
			int X[]={ -2, -1, 1, 2, -2, -1, 1, 2 },Y[]= { -1, -2, -2, -1, 1, 2, 2, 1 };
			for (int k = 0; k < 8; ++k)
			{
				int a=X[k]+i,b=Y[k]+j;
				if(a>=1&&b>=1&&a<=8&&b<=8){
					// if(i==1&&j==1)
					// 	cout<<"pop";
					g[{i,j}].pb({a,b});
				}
			}
		}
	}
	while (t--)
	{
		char d,h,f,j;
		cin>>d>>h>>f>>j;
		int x1,y1,x2,y2;
		x1=d-'a'+1;
		x2=f-'a'+1;
		y1=h-'0';
		y2=j-'0';
		// cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
		int ans=0;
		queue<pair<int,int>> q;
		map<pair<int,int>,int> vis,level;
		vis[{y1,x1}]=1; 
		level[{y1,x1}]=0;
		q.push({y1,x1});
		while(!q.empty()){
			auto a=q.front();
			// cout<<a.first<<" "<<a.second<<endl;
			q.pop();
			pair<int,int> y={y2,x2};
			if(a==y){
				ans=level[a];
				break;
			}
			
			for(auto i:g[a]){
				if(vis[i]==0){
					level[i]=level[a]+1;
					vis[i]=1;
					q.push(i);
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}