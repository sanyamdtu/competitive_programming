#include<bits/stdc++.h>
using namespace std;
int n,m;
char arr[2000][2000],vis[2000][2000];
string ans="";
int si,sj,ei,ej;
 
struct node{
	int i,j;
};
int main(){
	cin>>n>>m;	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
			vis[i][j]='.';
			if(arr[i][j]=='A'){
				si=i;
				sj=j;
			}
			else if(arr[i][j]=='B'){
				ei=i;
				ej=j;
				arr[i][j]='.';
			}
		}
	}

	queue<node> q;
	arr[si][sj]='$';
	q.push({si,sj});
	int dx[]={1,0,-1,0};
	int dy[]={0,1,0,-1};
	char dc[]={'D','R','U','L'};
	string ans="";
	while(!q.empty()){		
		auto a=q.front();
		q.pop();
		if(a.i==ei&&a.j==ej)
		{
			break;
		}
		for (int k = 0; k < 4; ++k)
		{
			int x=dx[k]+a.i;
			int y=dy[k]+a.j;
			if(x>=0&&y>=0&&x<n&&y<m&&arr[x][y]=='.'){
				arr[x][y]='$';
				vis[x][y]=dc[k];
				q.push({x,y});
			}
		}
	}
	while(vis[ei][ej]!='.'){
		ans+=vis[ei][ej];
		if(vis[ei][ej]=='L')
			ej++;
		else if(vis[ei][ej]=='R')
			ej--;
		else if(vis[ei][ej]=='D')
			ei--;
		else 
			ei++;
	}
	reverse(ans.begin(), ans.end());
	if(ans==""){
		cout<<"NO";
	}
	else{
		cout<<"YES"<<"\n"<<ans.length()<<"\n"<<ans<<endl;
	}
}