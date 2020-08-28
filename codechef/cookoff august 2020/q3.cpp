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
		int n,k;
		cin>>n>>k;
		int rem=(n/k);
		string s;
		cin>>s;
		int a=0,b=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='0')
				a++;
			else
				b++;
		}
		if(a%rem==0&&b%rem==0){
			string ans="";
			for (int i = 0; i < (a/rem); ++i)
			{
				ans+='0';
			}
			for (int i = 0; i < (b)/rem; ++i)
			{
				ans+='1';
			}
			string y=ans;
			string temp=ans;
			reverse(temp.begin(), temp.end());
			for (int i = 1; i < rem; ++i)
			{
				if(i%2==0)
					ans+=y;
				else
					ans+=temp;
			}
			cout<<ans;
		}
			
		else
			cout<<"IMPOSSIBLE";
		cout<<endl;
	}
	return 0;
}