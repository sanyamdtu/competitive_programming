#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
// int m[1000000];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	    // memset(m,0,sizeof(m));
		int n;
		cin>>n;		
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		// cout<<arr[0];
		sort(arr,arr+n);
		unordered_map<int,int> m;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				for (int k = 0; k <n ; ++k)
				{
					if(arr[k]!=0)
						m[(arr[i]+arr[j])*arr[k]]++;
				}
				
			}
		}
		int cnt=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				for (int k = 0; k < n; ++k)
				{
					
						
							int a=arr[i],b=arr[j],c=arr[k];
							int res=(a*b+c);
							cnt+=m[res];
							
						
				}
			}
		}
		cout<<cnt;
	
	return 0;
}