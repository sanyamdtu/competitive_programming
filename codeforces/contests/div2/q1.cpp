#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
#define maxi 100000
typedef  long long ll;
int sieve[maxi+1];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	int t;
	cin >> t;
	for(int i=2;i<=maxi;i++)
		sieve[i]=1;
	// for(int i=2;i<=10;i++)
	// 	cout<<sieve[i]<<" ";
	// cout<<endl;
	for(int i=2;i<=maxi;i++){
		for(int j=i*2;j<=maxi;j+=i){
			sieve[j]=i;
			// cout<<j<<" ";
		}
		
	}
	// for(int i=2;i<=10;i++)
	// 	cout<<sieve[i]<<" ";
	// cout<<endl;
	while (t--)
	{
		int n;
		cin>>n;
		int ans=INT_MIN;
		for(int i=2;i<=n;i++){
				ans=max(ans,sieve[i]);
		}
		cout<<ans<<endl;
	}
	return 0;
}