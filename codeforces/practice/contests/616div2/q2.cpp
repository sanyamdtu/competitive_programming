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
		for(int i=0;i<n;i++)
			cin>>arr[i];
		bool flag=true,pivot=false;
		ll a=INT_MAX;
		for(ll i=0;i<n;i++){
			if(!pivot){
				if(arr[i]<i){
					a=min(arr[i],arr[i-1]-1);
					pivot=true;
					if(a<=-1){
			           flag=false;
			           break;
			        }
				}
			}
			else{
				a=min(a-1,arr[i]);
			}
			if(a<0){
			   flag=false;
			   break;
			}
		}
		// cout<<flag;
		a=arr[0];
		if(!flag){
			int i;
			for(i=1;i<n;i++){
				a=min(a-1,arr[i]);
				if(a<0)
					break;
			}
			if(i==n&&a!=-1)
				flag=true;
	    }
		string ans;
		if(flag){
			ans+="Yes";
		}
		else{
			ans+="No";
		}
		cout<<ans<<endl;
	}
	return 0;
}