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
		if(n==1||n==2)
			cout<<1;
		else 
		(n%2==0)?cout<<n/2:cout<<(n+1)/2;
		cout<<endl;
	}
	return 0;
}