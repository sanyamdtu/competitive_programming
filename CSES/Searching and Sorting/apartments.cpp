#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	long long a[n],b[m];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int c=0;
	for (int i = 0,j=0; i < n&&j<m; )
	{
		if(abs(a[i]-b[j])<=k){
			c++;
			i++;
			j++;
		}
		else if((a[i]-k)<=b[j]){
			i++;
		}
		else{
			j++;
		}
	}
	cout<<c<<endl;

}