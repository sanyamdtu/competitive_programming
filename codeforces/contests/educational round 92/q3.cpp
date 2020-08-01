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
		int n=s.length();
		int ans=0;
		for(char a='0';a<='9';a++){
			for(char b='0';b<='9';b++){
				int cnt =0;
				char ch1=a,ch2=b;
				char w=ch1;
				for (int i = 0; i < n; ++i)
				{
					if(s[i]==w){
						swap(ch1,ch2);
						w=ch1;
						cnt++;
					}
				}
				
				if(ch1==ch2)
					ans=max(ans,cnt);
				else{
					if(cnt%2==1) cnt--;
					ans=max(ans,cnt);
				}
			}
		}
		cout<<n-ans<<endl;
	}
	return 0;
}