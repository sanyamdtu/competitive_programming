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
	string str;
	cin>>str;
	stack<char> s;
	vector<int> ans;
	bool flag=true;
	for (int i = 0; i < n-1; ++i)
	{
		if(s.empty()&&str[0]=='B'){
			ans.pb(i+1);
			(str[i+1]=='W')?str[i+1]='B':str[i+1]='W';
		}
		else if(s.top()!=str[i]){
			ans.pb(i+1);
			(str[i+1]=='W')?str[i+1]='B':str[i+1]='W';
		}
		s.push('W');
	}
	
	if(str[n-1]=='B')
		flag=false;
	if(!flag){
		while(!s.empty())
			s.pop();
	    while(!ans.empty())
			ans.pop_back();
		for (int i = 0; i < n-1; ++i)
		{
			if(s.empty()&&str[0]=='W'){
				ans.pb(i+1);
				(str[i+1]=='W')?str[i+1]='B':str[i+1]='W';
		    }
		    else if(s.top()!=str[i]){
				ans.pb(i+1);
				(str[i+1]=='W')?str[i+1]='B':str[i+1]='W';
			}
			s.push('B');
		}
		if(str[n-1]=='B')
			flag=true;
	}
	if(flag){
		cout<<ans.size()<<endl;
		for (int i = 0; i < ans.size(); ++i)
		{
			cout<<ans[i]<<" ";
		}
	}
	else 
		cout<<-1;
	return 0;
}