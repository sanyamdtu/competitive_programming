#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;;
	ll arr[21];
	arr[1]=1;
	for (int i = 2; i < 21; ++i)
	{
		arr[i]=arr[i-1]*(i);
	}
	while (t--)
	{
		int n;
		cin>>n;
		if(n==2)
			cout<<1;
		else{
			ll ans=1;
			ans=ans*(arr[(n/2)-1])*(arr[(n/2)-1]);
			ll c=(arr[n])/arr[n/2];
			c=c/arr[n/2];
			cout<<(ans*c)/2;
		}
		
	}
	return 0;
}