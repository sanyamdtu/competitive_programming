#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int n,int j,int i,int **dp){
	if(i>n)
		return 100000;
	if(n==i)
		return 0;
	if (dp[i][j]!=-1)
	{
		return dp[i][j];
	}
	int a=100000;
	if(j!=i)
	 a=func(n,i,i,dp)+1;
	if(j!=0)
	 a=min(a,func(n,j,i+j,dp)+1);//paste
	dp[i][j]=a;
	// cout<<a;
	return a;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int **dp=new int*[n];
	for (int i = 0; i < n; ++i)
	{
		dp[i]=new int[n];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			dp[i][j]=-1;
		}
	}
	
	cout<<func(n,0,1,dp)<<endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<dp[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}