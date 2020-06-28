#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
bool comp(int a ,int b){
	return a>b;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		int w[n];
		vector<ll> arr(n);
		for(int i=0;i<n;i++)
		cin>>arr[i];
		for(int i=0;i<k;i++)
		cin>>w[i];		
		sort(arr.begin(), arr.end());
		sort(w,w+k,comp);
		int s=0,e=n-1;
		ll happiness=0;
		int o=0;
		for( o=k-1;o>=0;o--){
			// cout<<w[o];
			if(w[o]==1){
				happiness+=2*arr[e];
				e--;
				// cout<<happiness<<" ";
			}
			else{
				break;
			}
		}
		for(int i=0;i<=o;i++){
				happiness+=arr[e]+arr[s];
				s+=w[i]-1;
				e--;
		}
		cout<<happiness<<endl;		
	}
	return 0;
}