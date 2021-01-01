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
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	stack<int> s;
	for (int i = n-1; i >=0; --i)
	{
		if(s.size()<2){
			if(s.empty()||s.top()<arr[i])
			s.push(arr[i]);
		}
		else{
			int a=s.top();
			s.pop();
			int b=s.top();
			if(a>b&&b>arr[i]){
				cout<<arr[i]<<a<<b;
				break;
			}
			s.push(a);
			if(s.top()<arr[i])
				s.push(arr[i]);
		}
	}
	// while(!s.empty()){
	// 	cout<<s.top()<<" ";
	// 	s.pop();
	// }
	return 0;
}
