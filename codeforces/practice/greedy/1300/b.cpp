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
		stack<char> ans;
		string input;
		cin>>input;
		int i=0,flag=-1;
		while(input[i]!='\0'){
			if(ans.empty())
				ans.push(input[i]);
			else if(ans.top()=='1'&& input[i]=='0'){
				flag=flag;
				flag*=-1;
				ans.pop();
			}
			else if(ans.top()=='0'&& input[i]=='1'){
				input[i]=input[i];
				flag*=-1;
				ans.pop();
			}
			else{
				ans.push(input[i]);
			}
			i++;
		}
		if(flag==-1){
			cout<<"NET";
		}
		else{
			cout<<"DA";
		}
		cout<<endl;
	}
	return 0;
}