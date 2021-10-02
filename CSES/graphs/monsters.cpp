#include<bits/stdc++.h>
using namespace std;
struct node{
	int i,j;
};
int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};
int main(){
	int n,m;
	cin>>n>>m;
	char arr[n][m];
	queue<node> q;
	int dis[n][m],vis[n][m];
	int si,sj;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			dis[i][j]=INT_MAX;
			vis[i][j]=INT_MAX;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='M'){
				dis[i][j]=0;
				q.push({i,j});
			}
			else if(arr[i][j]=='A')
			{
				si=i;
				sj=j;
			}
		}
	}
	while(!q.empty()){
		int size=q.size();
		while(size>0){
			auto a=q.front();
			q.pop();
			for (int k = 0; k < 4; ++k)
			{
				int x=dx[k]+a.i;
				int y=dy[k]+a.j;
				if(x>=0&&y>=0&&x<n&&y<m&&arr[x][y]=='.'&&dis[x][y]==INT_MAX){
					dis[x][y]=dis[a.i][a.j]+1;
					q.push({x,y});
				}
			} 	
			size--;
		}
	}
	if(dis[si][sj]!=INT_MAX)
	{
		cout<<"NO";
		return 0;
	}
	for (int k = 0; k < 4; ++k)
	{
		int x=dx[k]+si;
		int y=dy[k]+sj;
		if(x>=0&&y>=0&&x<n&&y<m&&dis[x][y]==INT_MAX){
			cout<<"NO";
			return 0;
		}
	}
	int f=0;
	q.push({si,sj});
	while(!q.empty()){
		int size=q.size();
		while(size>0){
			auto a=q.front();
			q.pop();
			for (int k = 0; k < 4; ++k)
			{
				int x=dx[k]+a.i;
				int y=dy[k]+a.j;
				if(x>=0&&y>=0&&x<n&&y<m&&arr[x][y]=='.'&&vis[x][y]==INT_MAX&&vis[a.i][a.j]<dis[a.i][j]-1){
					dis[x][y]=dis[a.i][a.j]+1;
					q.push({x,y});
				}
			} 	
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(dis[i][0]!=INT_MAX||dis[i][m-1]!=INT_MAX){
			cout<<"YES";
			return 0;
		}
	}
	for (int i = 0; i < m; ++i)
	{
		if(dis[0][i]!=INT_MAX||dis[n-1][i]!=INT_MAX){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}