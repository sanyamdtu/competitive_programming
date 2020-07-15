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
	int arr[n];
	string ans="";
	deque<int> q;
	for (int i = 0; i < n; ++i){
		int temp;
		cin>>temp;
		q.push_back(temp);
	}

	int a=INT_MIN;
	bool flag=true;
	while(!q.empty()&&flag){
		if(q.size()>=2){
			if(a<=q.front()&&a<=q.back()){
				if(q.front()>q.back()){
					ans+='R';
					a=q.back();
					
					q.pop_back();
				}
				else{
					ans+='L';
					a=q.front();
					
					q.pop_front();
				}
			}
			else if(a<q.front()){
				ans+='L';
				a=q.front();
				
				q.pop_front();
			}
			else if(a<q.back()){
				ans+='R';
				a=q.back();
				
				q.pop_back();
			}
			else 
				flag=false;
		}
		else{
			if(a>q.front())
				flag=false;
			else{
				ans+='L';
				a=q.front();
				
				q.pop_front();
			}
		}
	}
	cout<<ans.length()<<endl<<ans;
	return 0;
}