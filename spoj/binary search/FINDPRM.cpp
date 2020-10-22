#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
#define MAXI 10000007
typedef  long long ll;
int prime[MAXI];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < MAXI; ++i)
	{
		prime[i]=1;
	}
	// cout<<prime[2];
	prime[0]=prime[1]=0;
	for (int i = 2; i < MAXI; ++i)
	{
		if(prime[i]==1&&i*2<MAXI){
			// prime[i]=0;
			int j = i*2;
			for (; j < MAXI; j+=i)
			{
				prime[j]=0;
			}
			// prime[j-i]=1;
		}
	}
	for (int i = 1; i < MAXI; ++i)
	{
		prime[i]+=prime[i-1];
	}
	while (t--)
	{
		int n;
		cin>>n;
		int a=(n/2);
		// cout<<a;
		cout<<prime[n]-prime[a]<<endl;
	}
	return 0;
}