#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k;
	cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int cnt=0;
	for (int i = n-1,j=n-1; i>=0&&j>=0;)
	{
		// cout<<i<<" "<<j<<endl;
		if(arr[j]-arr[i]==k){
			cnt++;
			i--;
			j--;
		}
		else if(arr[i]>arr[j]-k)
			i--;
		else
			j--;
	}
	cout<<cnt;
	return 0;
}