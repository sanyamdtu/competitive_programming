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
		int n,k,lp;
		cin>>n>>k>>lp;
		int d[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>d[i];
		}
		int karr[2*k];
		for (int i = 0; i < 2*k; ++i)
		{
			if(i>k)
				karr[i-1]=2*k-i;
			else 
			 karr[i-1]=i;
		}
		set<tuple<int,int,bool>> m;
	}
	return 0;
}