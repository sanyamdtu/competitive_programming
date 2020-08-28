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
		
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			char ch;
			cin>>ch;
		 	arr[i]=ch-'0';
		}
		int ans=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i; j < n; ++j)
			{	
				int sum=0;
				for (int k = i; k <=j; ++k)
				{
					sum+=arr[k];
				}
				if(sum==j-i+1)
					ans++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}