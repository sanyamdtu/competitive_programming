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
		int n,count=0;
		string s;
		cin>>s;
		n=s.length();
		stack<char> stk;
		int i=0;
		while(i<n){
			if(!stk.empty()){
				// cout<<s[i]<<" ";
				if(stk.top()==s[i]){
					stk.pop();
					stk.push(s[i]);
				}
				else{
					count++;
					stk.pop();
				}
			}
			else
				stk.push(s[i]);
			i++;
		}
		cout<<count<<endl;
	}
	return 0;
}