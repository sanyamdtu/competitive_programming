#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int a[200],b[200],n;
int func(int i,int f,int n,int a[],int b[],int dp[][2]){
        if(i==n)
            return 0;
        if(dp[i][f]!=-1)
        	return dp[i][f];
        int p=a[i-1],q=b[i-1];
        if(f==1)
            swap(p,q);
         if(p>=a[i]&&p>=b[i]||q>=b[i]&&q>=a[i])
		    return 10000;
         int x=10000,y=10000;
         if(p<a[i]&&q<b[i])
              x=func(i+1,0,n,a,b);
        if(q<a[i]&&p<b[i])
            y=func(i+1,1,n,a,b)+1;
        return dp[i][f]=min(x,y);
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	int dp[n+1][2];
	for (int i = 0; i < n+1; ++i)
	{
		dp[i][0]=-1;
		dp[i][1]=-1;
	}
	int x=func(1,0);
	int y=func(1,1)+1;
	cout<<min(x,y);
	return 0;
}