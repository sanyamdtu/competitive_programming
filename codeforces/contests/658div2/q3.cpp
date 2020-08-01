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
		string a1,b1;
		cin>>a1>>b1;
		bool a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			if(a1[i]=='0')
				a[i]=false;
			else
				a[i]=true;
			if(b1[i]=='0')
				b[i]=false;
			else
				b[i]=true;
		}
		bool flag=true;
		vector<int> ans;
		if(a[0]==false){
			flag=!flag;
		}
		for (int i = 1; i < n; ++i)
		{
			if(a[i]!=flag){
				ans.pb(i);
				// ans.pb(i+1);
				flag=!flag;
			}
		}
		for (int i = n-1; i >0; --i)
		{
			if(b[i]!=flag){
				ans.pb(i+1); 
				flag=!flag;
				// ans.pb(i);
			}
		}
		if(b[0]!=flag){
			ans.pb(1);
			flag=!flag;
		}
		cout<<ans.size()<<" ";
		for (int i = 0; i < ans.size(); ++i)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}