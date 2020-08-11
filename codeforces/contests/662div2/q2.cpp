#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
		int n,q;
		cin>>n;
		int arr[n];
		int freq[100007];
		memset(freq,0,sizeof(freq));
		multiset<int,greater<int>> s;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if(s.find(freq[arr[i]])!=s.end()){				
				s.erase(s.find(freq[arr[i]]));
				s.insert(freq[arr[i]]+1);
			}
			else
				s.insert(freq[arr[i]]+1);
			freq[arr[i]]++;
		}
		cin>>q;
		for (int i = 0; i < q; ++i)
		{
			char ch;
			int x;
			cin>>ch>>x;
			if(ch=='+'){
				if(s.find(freq[x])!=s.end()){				
					s.erase(s.find(freq[x]));
					s.insert(freq[x]+1);
				}

				else
					s.insert(freq[x]+1);
				freq[x]++;
			}
			else{
				if(s.find(freq[x])!=s.end()){				
					s.erase(s.find(freq[x]));
					s.insert(freq[x]-1);
				}
				freq[x]--;		
			}
			int a=0;
			int b=0;
			int c=0;
			if(!s.empty()){
				a=*(s.begin());
				s.erase(s.begin());		
				if(!s.empty()){
					b=*(s.begin());
					s.erase(s.begin());		
					if(!s.empty())
						c=*(s.begin());
					s.insert(b);
				}
				s.insert(a);
			}
			int f=0;
			if((a>=8))
				f=1;
			if((a>=6&&b>=2))
				f=1;
			if((a>=4&&b>=4))
				f=1;
			if(b>=2&&c>=2&&a>=4)
				f=1;
			if(f==0)
				cout<<"NO";
			else
				cout<<"YES";
			cout<<endl;
		}
	
	return 0;
}