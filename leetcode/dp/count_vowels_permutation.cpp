#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int func(int a,int len,int dp[6][10000]){
    if(len==0)
        return 1;
    long long ans=0;
    if(dp[i][len]!=-1)
    	return dp[i]][len];
    if(a==0){
        for(int i=1;i<=5;i++)
            ans+=func(i,len-1);
        ans= ans;
    }
    if(a==1)
        ans= func(2,len-1);
    if(a==2)
        ans= func(1,len-1)+func(3,len-1);
    if(a==3){
        for(int i=1;i<=5;i++)
            if(i!=3)
                ans+=func(i,len-1);
        ans= ans;
    }
    if(a==4)
        ans= func(3,len-1)+func(5,len-1);
    if(a==5)
        ans= func(1,len-1);
       return dp[i][len]=ans;
        
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
		
	}
	return 0;
}