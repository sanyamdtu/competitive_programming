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
	int beg=1,last=n-2,mid=0;
	while(beg<=last){
		mid=(beg+last)/2;
		if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
			break;
		}
		else if(arr[mid]<arr[mid+1]&&arr[mid]>arr[mid-1])
			beg=mid+1;
		else if(arr[mid]>arr[mid+1]&&arr[mid]<arr[mid-1]){
			last=mid-1;
		}
	}
	cout<<mid;
	return 0;
}