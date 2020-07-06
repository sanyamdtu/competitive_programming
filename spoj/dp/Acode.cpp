#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int func(int i,int arr[],int n,int dp[]){
	if(i==n)
		return 1;
	int a,b;
	a=b=0;
	if(dp[i]>0)
		return dp[i];
	if(arr[i]==0)
		return 0;
	if(i!=n-1){
		if(arr[i]<3&&arr[i]*10+arr[i+1]<=26)
			a=func(i+2,arr,n,dp);
	}
	b=func(i+1,arr,n,dp);
	dp[i]=a+b;
	return a+b;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	while (1)
	{
		string s;
		cin>>s;
		if(s=="0")
			break;
		else{
			int n=s.length();
			int arr[n];
			for(int i=0;i<n;i++)
				arr[i]=s[i]-'0';
			int dp[n]={-1};
			cout<<func(0,arr,n,dp)<<endl;
		}
		
	}
	return 0;
}