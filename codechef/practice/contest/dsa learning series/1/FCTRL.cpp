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
		ll n;
		cin>>n;
		int i=5;
		ll zer=0;
		while(i<=n){
			zer+=(n/i);
			i*=5;
		}
		cout<<zer<<endl;
	}
	return 0;
}