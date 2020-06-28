#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
void func(int arr[],int n,int i,int j){
	if(i==n)
		return 
}
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
		ll sum=0;
		for(int j=0;j<n;j+=2)
			sum+=arr[j];
		cout<<s<<endl;
	}
	return 0;
}

// 1 7 3 4 7 6 2 9