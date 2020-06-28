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
		int idx=INT_MAX;
		int freq[10];
		for(int i=0;i<10;i++)
			freq[i]=INT_MAX;
		for(int i=0;i<s.length();i++)
			freq[s[i]-'0']=min(freq[s[i]-'0'],i);
		bool flag=false;
		for(int i=0;i<9;i+=2){
			 if(freq[i]!=INT_MAX&&i<s[s.length()-1]-'0'&&idx>freq[i]){
				flag=true;
				idx=freq[i];
			 }
		}
		for(int i=0;i<10;i++)
			freq[i]=INT_MIN;
		if(!flag){
			idx=INT_MIN;
    		for(int i=0;i<s.length();i++)
	    		freq[s[i]-'0']=max(freq[s[i]-'0'],i);	
	    	for(int i=0;i<9;i+=2){
			     if(freq[i]!=INT_MIN&&idx<freq[i]){
				   flag=true;
				   idx=freq[i];
			     }
		    }
		}
		if(flag){
			swap(s[s.length()-1],s[idx]);
		 cout<<s<<endl;
		}
	    else 
	     cout<<-1<<endl;

	
	return 0;
}