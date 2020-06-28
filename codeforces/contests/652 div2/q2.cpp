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
		string ans;
		cin>>ans;
		stack <char> s;
		s.push(ans[n-1]);
		int b=1;
		for(int i=n-2;i>-1;i--){

			if(ans[i]=='1'&&s.top()=='0'){
				for(;!s.empty()&& s.top()=='0';){
					s.pop();
				}
				s.push('0');
			}
			else{
				s.push(ans[i]);
			}
		}
		int a=0;
		string news="";
		while(!s.empty()){
			int a=1;
			news+=s.top();
			s.pop();
		}

		cout<<news<<endl;
	}	
	return 0;
}