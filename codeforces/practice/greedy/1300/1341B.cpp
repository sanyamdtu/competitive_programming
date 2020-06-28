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
			int n,k;
			cin>>n>>k;
			ll arr[n];
			for(int i=0;i<n;i++)
				 cin>>arr[i];
			ll count=1,maxi=0;
			int l=0,cl=0;
			queue<int> q;
			for(int i=1;i<n-1;){
				if(count==k-1){
					if(i!=n-1&&arr[i-1]<arr[i]&&arr[i+1]<arr[i])
						q.push(i);
					i++;
					cl++;
					if(!q.empty()&&cl==q.front())
						q.pop();
				}
				else{
					if(arr[i-1]<arr[i]&&arr[i+1]<arr[i])
						q.push(i);
					count++;
					i++;
				}
				if(maxi<q.size()){
					maxi=q.size();
					l=cl;
				}
			}
			if(maxi<q.size()){
					maxi=q.size();
					l=cl;
			}
			cout<<maxi+1<<" "<<l+1<<endl;
		}
		return 0;
	}