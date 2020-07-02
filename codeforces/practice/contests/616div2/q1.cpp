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
		int last=s[n-1],sum=0;		
		vector<int> odd,even,zero;
		for(int i=0;i<n;i++){
			if(s[i]=='0')
				zero.pb(i);
			else if(s[i]-'0'%2==0)
				even.pb(i);
			else 
				odd.pb(i);
			sum+=s[i]-'0';
		}
		string ans="";
		if(last%2==1&&sum%2==0){
			ans+=s;
		}	
		else {
			if(n==1){
				ans="-1";
			}
			else{
					string ans;
					if(last%2==0){
						if(even.length()==n)
							ans="-1";
						while((s[s.length()-1]-'0')%2==0){
							sum-=s[s.length()-1]-'0';
							s.pop();
						}
						if(s.length()==1)
							ans="-1";
					}
					if(ans!="-1"){
						if(sum%2==1){
							int n=s.length();
							bool flag=false;
							for(int i=1;i<n-1;i++){
								if(s[i]-'0'%2==1){
							    	flag=true;
									continue;
								}
								ans+=s[i];
							}
							if(!flag){
								int i=0;
								while(s[i]='0'%2==0&&s[0]!='0'){
									
								}
							}
						}
						else
							ans=s;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}