#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m;
	cin>>n>>m;
	int i,j;
	cin>>i>>j;
	j=j+1;
	int mask=(1<<j)-1;
	
	int mask2=(1<<i)-1;

	mask2=~mask2;
	mask=mask&mask2;
	mask=~mask;
	m=m<<i;
	n=n&mask;
	// cout<<n;
	cout<<(n|m);
	return 0;
}


