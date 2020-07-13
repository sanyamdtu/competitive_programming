#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,a,b,c;
	cin>>n;
	string s;
	cin>>s;
	a=b=c=0;
	for(int i=0;i<n;i++){
		if(s[i]=='R')
			a++;
		else if(s[i]=='G')
			b++;
		else
			c++;
	}
	int dp[n];
	for(int i=0;i<n;i++){
	   for(int j=i;j>=0;j--){
	   	  if(dp[])
	   }		
	}

	return 0;
}