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
		stack<ll> s;
		ll count=0;
		int i;
		for( i=0;i<n;i++){
			if(!s.empty()){
				if(s.top()<=arr[i])
					s.push(arr[i]);
				else{
				    ll a=s.size();
					count+=(a*(a+1))/2;
					while(!s.empty())
						s.pop();
					s.push(arr[i]);
				}
			}
			else
				s.push(arr[i]);
		}
		ll a=s.size();
		count+=(a*(a+1))/2;
		while(!s.empty())
			s.pop();
		s.push(arr[i]);
		cout<<count<<endl;
	}
	return 0;
}