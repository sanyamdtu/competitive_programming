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
		
		string s;
		cin>>s;
		int n=s.length() ;
		string w;
		for (int i = 0; i < n; ++i)
		{
			w.pb('2');
		}
		int x;
		cin>>x;		
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='0'){
				if(i-x>=0)
					w[i-x]='0';
				if(i+x<=n-1)
					w[i+x]='0';
			}
		}
		int f=1;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='1')
				if((i+x<=n-1&&w[i+x]=='0')||i+x>=n)
					if((i-x>=0&&w[i-x]=='0')||(i-x)<0)
					{
						f=0;
						break;
					}
			
		}
		if(f==0)
			cout<<-1<<endl;
		else{
			for (int i = 0; i < n; ++i)
			{
				if(w[i]=='2')
					w[i]='1';
			}
			cout<<w<<endl;
		}
	}
	return 0;
}