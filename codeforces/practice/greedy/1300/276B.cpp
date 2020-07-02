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
	    int n=s.length();
	    int map[26];
	     memset(map,0,sizeof(map));
	    for(int i=0;i<n;i++)
	    	map[s[i]-'a']++;
	    int count=0;
	    for(int i=0;i<n;i++){
	    	if(map[s[i]-'a']%2==1){
	    		count++;
	    	}
	    }
	    if(count==0||count==1){
	    	cout<<"First";
	    }
	    else if(count%2==0)
	    	cout<<"Second";
	    else 
	    	cout<<"First";
	    cout<<endl;
	return 0;
}