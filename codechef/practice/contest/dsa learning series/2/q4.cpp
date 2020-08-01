#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int a,int b){
	if(a==0||b%a==0)
		return a;
	return func(b%a,a);
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int g=0;
		int vis[n];
		memset(vis,0,sizeof(vis));
		for (int i = 0; i < n; ++i)
		{
			if(vis[i]==0)
			for (int j = i+1; j <n ; ++j)
			{
				if(vis[j]==0)
				if(func(i,j)==1){
					vis[j]=1;
					g+=2;
					break;
				}
			}
		}
		cout<<g<<" ";
		cout<<pow(2,n)-pow(2,n-g)-n<<endl;
	}
	return 0;
}