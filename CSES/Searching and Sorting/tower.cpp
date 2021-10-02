#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int crr[n],curr=0;
	for(int i=0,j=0;j<n;j++){
		curr+=arr[j];
		if(j-i+1==a){
			crr[j]=curr;
			curr-=arr[i++];
		}
	}
	for (int i = n-1; i >=a; --i)
	{
		
	}
}