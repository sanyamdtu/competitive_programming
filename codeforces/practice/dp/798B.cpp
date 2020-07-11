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
	string s[51];
	for(int i=0;i<n;i++)
		cin>>s[i];
	string str[51];
	for(int i=0;i<n;i++)
		str[i]=s[i];
	for(int i=0;i<n;i++)
		str[i]=str[i]+str[i];
	int ans=INT_MAX;
	bool flag=true;
	for(int i=0;i<n&&flag;i++){	
		int a=0;
		for(int j=0;j<n&&flag;j++){
			// cout<<str[j]<<endl<<s[i]<<endl;
		    size_t found=str[j].find(s[i]);
		    // cout<<found;
			if(found!=string::npos){
				a+=found;
			}
			else
				flag=false;
		}
		ans=min(ans,a);
	}
	if(flag)
		cout<<ans;
	else
		cout<<-1;
	return 0;
}