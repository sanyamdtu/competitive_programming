#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long x;
	cin>>n>>x;
	long long p[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>p[i];
	}
	sort(p,p+n);	
	long long k=0;
	int d=0;
	for (int i = 0,j=n-1; i <=j; )
	{
		if(p[i]+p[j]<=x){
			i++,j--,d++;
		}
		else {
			j--;
			d++;
		}
	}
	// c=max(c,d);
	cout<<d<<endl;

}