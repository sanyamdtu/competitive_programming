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
	while (t--)
	{
		int n,k,ans=0;
		cin>>n>>k;
		if(n<=k)
			ans=k-n;
		else{
			((n+k)%2==0)?ans=0:ans=1;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}