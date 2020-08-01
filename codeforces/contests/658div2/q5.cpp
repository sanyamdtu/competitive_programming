#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
bool func(int arr[],set<int> a,set<int> b,int n,int i){
	if(a.size()==n+1||b.size()==n+1){
		return false;
	}
	if(i==2*n)
		return true;
	bool ans=true;
	if(i==0){
		s.insert(arr[i]);
		ans=func(arr,a,b,n,i+1);
		a.erase(arr[i]);
		s.insert(arr[i]);
		ans=ans||func(arr,a,b,n,i+1);
	}
	else{
		if(!a.empty()){
			if(a.back()>arr[i]){
				ans=false;
			}
		}
		else{
				s.insert(arr[i]);
				ans=func(arr,a,b,n,i+1);
				s.ers
		}
		if(!b.empty()){
			if(b.back()>arr[i]){
				ans=ans||false;
			}
		}
		else{
				s.insert(arr[i]);
				ans=ans||func(arr,a,b,n,i+1);
		}
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		int arr[2*n];
		for (int i = 0; i < 2*n; ++i)
		{
			cin>>arr[i];
		}
		set<int> a,b;
		unordered_map<set<int>,set<int>> map; 
		if(func(arr,a,b,n,0))
			cout<<"YES";
		else 
			cout<<"NO";
		cout<<endl;
	}
	return 0;
}