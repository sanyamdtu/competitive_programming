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
		string s;
		cin>>s;
		stack<char> stk;
		for(int i=0;i<n;i++){
			if(!stk.empty()){
				if(stk.top()=='('&&s[i]==')')
					stk.pop();
				else
					stk.push(s[i]);
			}
			else 
				stk.push(s[i]);
		}
		int ans=0;
		if(!stk.empty())
			ans=stk.size()/2;
		cout<<ans<<endl;
	}
	return 0;
}