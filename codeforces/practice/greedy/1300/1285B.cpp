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
		ll ya=0;
		bool flag=false;
		for(int i=0;i<n;i++){
           cin>>arr[i];
           if(arr[i]>0)
           	flag=true;
           ya+=arr[i];
		}
		ll max_s=INT_MIN,curr_s=0;
		for(int i=0;i<n-1;i++){
			if(curr_s+arr[i]<0){
				curr_s=0;
			}
			else
				curr_s+=arr[i];
			max_s=max(max_s,curr_s);
		}	
		curr_s=0;
		for(int i=1;i<n;i++){
			if(curr_s+arr[i]<0){
				curr_s=0;
			}
			else
				curr_s+=arr[i];
			max_s=max(max_s,curr_s);
		}	
		if(!flag){
			cout<<"No";
		}
		else
		   (max_s<ya)?cout<<"Yes":cout<<"No";
		cout<<endl;
	}
	return 0;
}