#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int n,m,k;
int x,y;
int dx[]={1,0,0,-1};
int dy[]={0,-1,1,0};
char dir[]={'D','L','R','U'};
char arr[2000][2000];
int dist[2000][2000];
void bfs(int x,int y){
	memset(dist,-1,sizeof(dist));
	queue<pair<int,int>> q;
	q.push({x,y});
	dist[x][y]=0;
	while(!q.empty()){
		auto a=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			int p=a.first+dx[i];
			int qw=a.second+dy[i];
			if(p>=0&&qw>=0&&p<n&&qw<m&&dist[p][qw]==-1&&arr[p][qw]!='*'){
				dist[p][qw]=dist[a.first][a.second]+1;
				q.push({p,qw});
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		cin>>n>>m>>k;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin>>arr[i][j];
				if(arr[i][j]=='X')
					x=i,y=j;
			}
		}
		if(k%2==0){
			string ans="";	 
			bfs(x,y);
			int f=0;
			int sx=x;int sy=y;
			while(k){
				f=0;
				int p,q;
				for (int i = 0; i < 4; ++i)
				{
					p=dx[i]+sx;
					q=dy[i]+sy;
					if(p>=0&&q>=0&&p<n&&q<m&&dist[p][q]<=k&&arr[p][q]!='*')
					{
						f=1;
						sx=p,sy=q;
						ans+=dir[i];
						break;
					}
				}
				if(f==0)
					break;

				k--;
			}
			
			if(f){
				cout<<ans;
			}
			else
				cout<<"IMPOSSIBLE";
		}
		else
			cout<<"IMPOSSIBLE";
		
	return 0;
}
