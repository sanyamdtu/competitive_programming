#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node{
	int r,p;
};
int func(int x,int y,int a,int b,int arr[][10],int p,int q,int f=0){
	if(arr[x][y]==0&&arr[a][b]==0)
		return p-q;

	// for (int i = 0; i <=6; ++i)
	// {
	// 	for (int j = 0; j <=6; ++j)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	// cout<<endl;
	// cout<<x<<" "<<y<<" "<<a<<" "<<b<<" "<<p<<" "<<q<<" "<<f;
	// cout<<endl<<endl;;
	int ans=INT_MIN;
	if((f==0&&arr[x][y]==1)||arr[a][b]==0){
		arr[x][y]=0;
		ans=max(func(x,y-1,a,b,arr,p+1,q,1-f),func(x,y+1,a,b,arr,p+1,q,1-f));
		if(y%2==0){
			ans=max(ans,func(x-1,y-1,a,b,arr,p+1,q,1-f));
		}
		else{
			ans=max(ans,func(x+1,y+1,a,b,arr,p+1,q,1-f));
		}
		arr[x][y]=1;
	}
    if((f==1&&arr[a][b]==1)||arr[x][y]==0){
		ans=INT_MAX;
		arr[a][b]=0;
		ans=min(func(x,y,a,b-1,arr,p,q+1,1-f),func(x,y,a,b+1,arr,p,q+1,1-f));
		if(b%2==0){
			ans=min(ans,func(x,y,a-1,b-1,arr,p,q+1,1-f));
		}
		else{
			ans=min(ans,func(x,y,a+1,b+1,arr,p,q+1,1-f));
		}
		arr[a][b]=1;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int l = 0; l < t; ++l)
	{
		int s,n;
		node a,b;
		cin>>s>>a.r>>a.p>>b.r>>b.p>>n;
		node pi[n];
		int f=0,p=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>pi[i].r>>pi[i].p;
			if(pi[i].r==2&&pi[i].p==2)
				f=1;
		}
		// int a1=1,b=1;
		cout<<"Case #"<<l+1<<": ";
		
			// cout<<endl;
			int arr[10][10];
			memset(arr,0,sizeof(arr));
			for (int i = 1; i <=s; ++i)
			{
				for (int j = 1; j <= 2*i-1; ++j)
				{
					arr[i][j]=1;
				}
			}
			for (int i = 0; i < n; ++i)
			{
				arr[pi[i].r][pi[i].p]=0;
			}
			// cout<<a.r<<a.p<<b.r<<b.p<<endl;
			cout<<func(a.r,a.p,b.r,b.p,arr,1,1,0)<<endl;
			// for (int i = 0; i <=6; ++i)
			// {
			// 	for (int j = 0; j <=6; ++j)
			// 	{
			// 		cout<<arr[i][j]<<" ";
			// 	}
			// 	cout<<endl;
			// }
		
		// cout<<endl;

	}
	return 0;
}