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
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		sort(arr,arr+n);
		int sum2=0,ans=0;
		for(int i=n-1;i>=0;i--){
			ans++;
			sum2+=arr[i];
			if(sum2>sum/2){
				break;
			}
		}
		cout<<ans;
	return 0;
}