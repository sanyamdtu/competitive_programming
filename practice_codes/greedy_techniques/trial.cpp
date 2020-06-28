#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int bsearch(int arr[],int n,int ele){
	int beg=0,last=n-1,mid;
	while(beg<=last){
		mid=beg+((last-beg)/2);
		if(arr[mid]==ele)
			return mid;
		else if(arr[mid]<ele)
			beg=mid+1;
		else
			last=mid-1;
	}
	cout<<endl<<last<<endl;
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	cout<<bsearch(arr,n,3);
	return 0;
}