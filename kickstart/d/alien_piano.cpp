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
	for (int l=1;l<=t;l++)
	{
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int dp[n+1][4];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				dp[i][j]=INT_MAX;
			}
			// cout<<endl;
		}
		dp[n-1][1]=dp[n-1][3]=dp[n-1][2]=dp[n-1][0]=0;
		
		for (int i = n-2; i >=0; i--)
		{
			for (int k = 0; k < 4; ++k)
				for(int j=0;j<4;j++){
					if(arr[i]>arr[i+1]){
						int a=dp[i+1][k];
						if(j<=k)
							a++;
						dp[i][j]=min(dp[i][j],a);
					}
					else if(arr[i]==arr[i+1]){
						int a=dp[i+1][k];
						if(j!=k)
							a++;
						dp[i][j]=min(dp[i][j],a);
						
					}
					else{
						int a=dp[i+1][k];
						if(j>=k)
							a++;
						dp[i][j]=min(dp[i][j],a);
						
					}
			    }
		}
		
		int p=min(dp[0][0],min(dp[0][1],min(dp[0][2],dp[0][3])));
		cout<<"Case #"<<l<<": "<<p<<endl;
	}
	return 0;
}