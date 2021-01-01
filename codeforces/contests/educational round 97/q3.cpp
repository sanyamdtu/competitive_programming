#include<iostream>
using namespace std;
typedef long long ll;
int main()
 {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll arr[n];
	    for(ll i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    ll i=0,curr=0,ans=-1,g=-1;
	    for(ll j=0;j<n;j++){
	        curr+=arr[j];
	        if(curr>k){
	            while(i<=j&&curr>k){
	                curr-=arr[i];
	                i++;
	            }
	        }
	        if(curr==k){
	            ans=i+1;
	            g=j+1;
	            break;
	        }
	    }
	    
	    cout<<ans;
	    if(ans!=-1)
	    cout<<" "<<g;
	    cout<<endl;
	}
	return 0;
}