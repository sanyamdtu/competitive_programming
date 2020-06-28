#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		int n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int ans=0,w=0;;
		for(int i=0;i<n;i++){
			if(arr[i]>=w){
				w+=arr[i];
				ans++;
			}
		}
		cout<<ans;
	return 0;
}