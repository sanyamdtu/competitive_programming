#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	int n=s.length();
	int k;
	cin>>k;
	k=k/2;
	int c=0,d=0;
	string ans="";
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='('&&c<k){
			ans+=s[i];
			c++;
		}
		else if(s[i]==')'){
			ans+=s[i];
			d++;
		}
		if(d==k)
			break;
	}
	cout<<ans;
	return 0;
}