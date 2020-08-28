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
	string s[n];
	for (int i = 0; i < n; ++i)
	{
		string ans;
		if(!s[i].empty()){
			int curr=0;
			char ch=s[i][0];
			ans.pb(s[i][0]);
			for (int j = 1; j < s[i].length(); ++j)
			{
				if(s[i][j]==ch){
					curr++;
				}
				else
				{
					while()
					curr=0;
				}
			}
		}

	}
	return 0;
}  