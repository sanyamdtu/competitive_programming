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
		ll arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int i=1;
		bool flag=true;
		while(arr[i-1]==1&&i<n){
			flag=!flag;
			i++;	
		}
		if(!flag)
			cout<<"Second";
		else
			cout<<"First";
		cout<<endl;
	}
	return 0;
}