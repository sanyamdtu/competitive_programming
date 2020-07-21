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
	int arr[n][2];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i][2];
	}
	int start,targ,ans=0,range=start,i=0;
	cin>>start>>targ;
	multiset<int> s;
	while(range<targ){
		while(i<n&&range>=arr[i][0]){
			s.insert(arr[i][1]);
			i++;
		}
		if(s.empty())return -1;
		int a=*(s.begin());
		range+=a;
		ans++;
		s.erase(s.find(a));
	}
	cout<<ans;
	return 0;
}