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
		int r,c;
		cin>>r>>c;
		char arr[r][c];
		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j < c; ++j)
			{
				cin>>arr[i][j];
			}
		}
		map<pair<int,int>,list<pair<int,int>>> g;
		int a[4]={1,-1,0,0} ,b[4]={0,0,-1,1};
		for (int i = 0; i < r; ++i)
		{
			for (int j = 0; j <c ; ++j)
			{
				if(arr[i][j]=='.')
				for (int k = 0; k < 4; ++k)
				{
					int x=i+a[k],y=j+b[k];
					if(x>=0&&y>=0&&x<=r-1&&y<=c-1&&arr[x][y]=='.')
						g[{i,j}].pb({x,y});
				}
			}
		}
		map<pair<int,int>,bool> vis;
		int ans=0;
		for(auto i:g){
			if(!vis[{i.first}]){
				int c=0;
				queue<pair<int,int>> q;
				vis[{i.first}]=true;
				q.push({i.first});
				while(!q.empty()){
					c++;
					auto a=q.front();
					q.pop();
					for (auto j:g[a])
					{
						if(!vis[j]){
							q.push(j);
							vis[j]=true;
						}
					}
				}
				ans=max(ans,c);
			}
		}
		cout<<"Maximum rope length is "<<ans<<"."<<endl;
	}
	return 0;
}