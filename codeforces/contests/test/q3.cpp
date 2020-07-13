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
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int flag=0;
		for(int i=1;i<=n;i++){
			if(arr[i-1]==i)
				flag++;
		}
		if(flag==n)
			cout<<0;
		else if(flag>0)
			cout<<2;
		else
			cout<<1;
		cout<<endl;
	}
	return 0;
}