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
		int arr[n];
		multiset<int> s;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int ans=0;
		for (int i = 2; i <=100 ; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				s.insert(arr[j]);
			}
			int curr=0;
			while(!s.empty()){
				int a=*(s.begin());
				s.erase(s.begin());
				if(s.find(i-a)!=s.end()){
					curr++;
					s.erase(s.find(i-a));
				}
			}
			ans=max(ans,curr);
		}
		cout<<ans<<endl;
	}
	return 0;
}