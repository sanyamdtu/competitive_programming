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
		int freq[26];
		memset(freq,0,sizeof(freq));
		for (int i = 0; i < n; ++i)
		{
			freq[s[i]-'a']++;
		}
		int a=1;
		for (int i = 0; i < 26; ++i)
		{
			if(freq[i]%2!=0)
				a=0;
		}
		(a==1)?cout<<"YES":cout<<"NO";
		cout<<endl;

	}
	return 0;
}