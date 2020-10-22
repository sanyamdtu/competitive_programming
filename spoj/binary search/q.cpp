#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;



int mergesort(int arr[],int n,int s,int e){
	if(s>=e)
		return 0;
	 int mid=(s+e)/2,a=0;
	// int a=mergesort(arr,n,s,mid);
	 // a+=mergesort(arr,n,mid+1,e);
	int i=s,j=mid+1;
	while(i<=mid&&j<=e){
		cout<<"pop";
		if(arr[i]<arr[j]){
			a+=arr[i]*(e-j+1);
			i++;
		}
		else
			j++;
	}
	return a;
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
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		cout<<mergesort(arr,n,0,n-1);
	}
	return 0;
}