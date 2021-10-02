#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long  x=0,ans=0;
	if(n%2==1){
		x=arr[n/2];
	}
	else{
		x=(arr[(n/2)]+arr[(n-1)/2])/2;
	}	
	for (int i = 0; i < n; ++i)
	{
		ans+=abs(arr[i]-x);
	}
	cout<<ans;
}