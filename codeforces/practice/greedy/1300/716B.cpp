#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s,ans;
	cin>>s;
	int n=s.length();
	int freq[26],count=0;
	memset(freq,0,sizeof(freq));
	int j=0;
	bool flag=false;
	for(int i=0;i<n;i++){
		if(i-j>=26){
			if(s[j]!='?')
			 freq[s[j]-'A']--;
			j++;
		}
		if(s[i]!='?'){
		    freq[s[i]-'A']++;
		}
		if((i-j)==25){
			int f=1;
			// if(i==n-1)
			// 	cout<<"lkl";
			for (int i = 0; i < 26; ++i){
				if(freq[i]>1){
					// cout<<i;
					f=0;
					break;
				}
			}
			if(f==1){
				ans="";
				for (int k = 0; k < j; ++k){
					if(s[k]=='?')
					 ans+='A';
					else
						ans+=s[k];
				}
				for (int l = j; l <=i; ++l)
					ans+=s[l];
				for (int k = i+1; k < n; ++k){
					if(s[k]=='?')
					 ans+='A';
					else
						ans+=s[k];
				}
				flag=true;
				break;
			}
		}
	}
	if (!flag)
		cout<<-1;
	else {
		// for (int i = 0; i < 26; ++i)
		// 	cout<<freq[i]<<" ";
		// cout<<endl;
		int k=0;
		for (int i = j; i < j+26; ++i)
		{
			while(k<26&&freq[k]!=0)
				k++;
			if(ans[i]=='?'){
				ans[i]='A'+k;
				k++;
			}
		}
		cout<<ans;
	}
	return 0;
}