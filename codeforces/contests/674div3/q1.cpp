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
		int n,x;
		cin>>n>>x;
		if(n==1||n==2)
			cout<<1;
		else{
			n-=2;
			cout<<1+(n+x-1)/x;
		}
		cout<<endl;
		
	}
	return 0;
}