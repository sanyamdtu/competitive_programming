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
		ll n,r;
		cin>>n>>r;
		if(n<r){
			cout<<((n*(n-1))/2)+1;
		}
		else if(n-1==r-1){
		   cout<<((r*(r-1))/2)+1;	
		}
		else{
			cout<<(r*(r+1))/2;
		}
		cout<<endl;	
	}

	return 0;
}