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
		int f=0;
		int n;
		cin>>n;
		string s,a;
		cin>>s;
		a="abacaba";
		auto found = s.find(a); 
	    if (found != string::npos) 
	        f++; 
	    char arr[] = "abacaba"; 
	    found = s.find(arr, found+1); 
	    if (found != string::npos) 
	    	f++;
	    string ans;
	    ans="";
	    if(f==0){
	    	string temp;
	    	temp="";
	    	for (int i = 0; i < n; ++i)
	    	{
	    		int p=temp.length();
	    		if(temp=="abacaba"){
	    		}
	    		if(s[i]=='a'){
	    			if(p!=0&&temp[p-1]=='a')
	    				temp="";
	    		    temp+='a';
	    		}
	    		else if(s[i]=='b'){
	    			if(p!=0&&temp[p-2]=='b')
	    				temp="ab";
	    		    temp+='a';
	    		}
	    		else if(s[i]=='c'){

	    		}
	    		else{
	    			temp="";
	    		}
	    	}
	    }
	    else if(f==1){
	    	for (int i = 0; i < n; ++i)
	    	{
	    		if(s[i]=='?')
	    			ans+='z';
	    		else
	    		ans+=s[i];
	    	}
	    	cout<<ans;
	    }
	    else {
	    	cout<<"NO";
	    }
	}
	return 0;
}