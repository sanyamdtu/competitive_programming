#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,x;
	cin>>n>>x;
	ll arr[n];
	unordered_map<ll ,vector<int> > m;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		m[arr[i]].push_back(i+1);
	}
	sort(arr,arr+n);

	for (int i = 0; i < n; ++i)
	{
		
		for (int j = i+1,k=n-1; j <k; )
		{
			int sum=arr[i]+arr[j]+arr[k];
			if(x>sum)
				j++;
			else if(x<sum)
				k--;
			else{
				cout<<m[arr[i]].back();
				m[arr[i]].pop_back();
				cout<<" ";
				cout<<m[arr[j]].back();
				m[arr[j]].pop_back();
				cout<<" ";
				cout<<m[arr[k]].back();
				m[arr[k]].pop_back();
				cout<<" ";
				return 0;
			}
		}
	}
	cout<<"IMPOSSIBLE";
}