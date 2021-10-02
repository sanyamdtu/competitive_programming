#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	long long arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	long long c=0,ans=0;
	map<long long,int> m;
	for (int j = 0,i=0; j < n; ++j)
	{
		m[arr[j]]++;

		if(m[arr[j]]==1)
			c++;
		while(i<=j&&c>x){
			m[arr[i]]--;
			if(m[arr[i]]==0)
				c--;
			i++;	
		}
		ans+=j-i+1;
	}
	cout<<ans;
}