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
		vector<ll> temp;
		int n;
		cin>>n;
		vector<ll> arr(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		
		int uuu=0;
	    for (int i = 0, st = 0, en = 0; i < arr.size(); ++i, st = en, en = temp.size()) {
	    temp.pb(arr[i]);
	    int o=0;
	    for (int j = st; j < en; ++j)
	      if (temp.back() != (temp[j] | arr[i])) 
	      	   temp.pb(temp[j] | arr[i]);
	      	uuu++;
	      if(uuu==0)
	        uuu++;	
	    }
	    int a=unordered_set<ll>(begin(temp), end(temp)).size();
	  (a==((n*(n+1)))/2)?cout<<"YES":cout<<"NO";
	  cout<<endl;
   }
	return 0;
}