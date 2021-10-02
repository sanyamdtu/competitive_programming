#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>>n;
	ll arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	ll c=1,ans=0;
	for (int i = 0; i < n; ++i)
	{
		if(c<arr[i]){
			ans=c;
			break;
		}
		c+=arr[i];
	}
	if(ans==0)
		ans=c;
	cout<<ans;
	return 0;
}