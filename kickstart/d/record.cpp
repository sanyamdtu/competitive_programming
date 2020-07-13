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
	for (int l=1;l<=t;l++)
	{
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int maxi=INT_MIN,count=0;
		for (int i = 0; i < n; ++i)
		{
			if(maxi<arr[i]){
				if(i==n-1||arr[i]>arr[i+1]){
					// cout<<i<<" ";
					count++;
				}
			}
			maxi=max(arr[i],maxi);
		}
		cout<<"Case #"<<l<<": "<<count<<endl;
	}
	return 0;
}