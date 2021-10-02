#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i]>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int c=0,k=0;
	for (int i = 0,j=0; i < n&&j<n;)
	{
		if(a[i]<=b[j]){
			c++;
			i++;
		}
		else{
			j++;
			c--;
		}
		k=max(c,k);
	}
	cout<<k;
}