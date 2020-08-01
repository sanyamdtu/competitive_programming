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
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		string s[n+1];
		for (int i = 0; i <150; ++i)
		{
			s[0]+='a'+(i)%26;
		}
		for (int i = 1; i < n+1; ++i)
		{
			s[i]=s[i-1].substr(0,arr[i-1]);
			int temp=s[i-1][arr[i-1]]-'a';
			temp+=3;
			while(s[i].length()<200){
				s[i]+='a'+(temp)%26;
				temp++;
			}

		}
		for (int i = 0; i < n+1; ++i)
		{
			cout<<s[i]<<endl;
		}
	}
	return 0;
}