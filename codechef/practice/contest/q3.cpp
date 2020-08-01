#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
#define M 32 
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		ll ans=arr[0];
		for (int i = 1; i < n; ++i)
		{
			ans=ans|arr[i];
		}
		bitset<M> bs(ans);
		int a=0;
		
		for (int i = bs.size()-1; i >=0; --i)
		{
			if(bs[i]==1){
				a++;
				if(a>k)
				 bs[i]=0;
			}
		}
		
		cout<<bs.to_ullong()<<endl;
	}
	return 0;
}