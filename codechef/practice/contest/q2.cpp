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
		int arr[n];
		unordered_map<int,int> m;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			m[arr[i]]++;
		}
		bool flag=true;
		for(auto i:m){
			if(i.second>=3)
				flag=false;
		}
		queue<int> q;
		sort(arr,arr+n);
		if(arr[n-1]==arr[n-2])
			flag=false;
		if(flag){
			for (int i = n-1; i >0; --i)
			{
				if(arr[i]==arr[i-1]){
					q.push(arr[i]);
					arr[i]=-1;
				}
			}
			cout<<"YES"<<endl;
			for (int i = 0; i < n; ++i)
			{
				if(arr[i]!=-1)
					cout<<arr[i]<<" ";
			}
			while(!q.empty()){
				cout<<q.front()<<" ";
				q.pop();
			}
		}
		else{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}