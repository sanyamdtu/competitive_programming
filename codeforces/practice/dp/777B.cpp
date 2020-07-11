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
    string sh,mo;
    cin>>sh>>mo;
    vector<int> s,m;
    for(int i=0;i<n;i++){
    	s.pb(sh[i]-'0');
    	m.pb(mo[i]-'0');
    }
    sort(s.begin(), s.end());
    sort(m.begin(), m.end());
    int c1=0;//minimum flick moriarty
    for(int i=0,j=0;i<n,j<n;){
    	if(s[i]>m[j])
    		j++;
    	else{
    		i++;
    		j++;
    		c1++;
    	}
    }
    c1=n-c1;
    int c2=0;
    for(int i=0,j=0;i<n,j<n;){
    	if(s[i]>=m[j])
    		j++;
    	else{
    		i++;
    		j++;
    		c2++;
    	}
    }
    
    cout<<c1<<endl<<c2;
	return 0;
}