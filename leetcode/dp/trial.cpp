#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
#define maxx 1000033;
typedef  long long ll;
int gcd(int a,int b){
	if(a<b)
		swap(a,b);
	if(a%b==0)
		return b;
	return gcd(b,a%b);
}
int prime[1000033];
int main()
{
	
	for (int i = 0; i <1000033 ; ++i)
	{
		prime[i]=INT_MAX;
	}
	for (int i = 2; i <1000033; ++i)
	{
		if(prime[i]==INT_MAX){
			for (int j = i; j <1000033; j+=i)
			{
				prime[j]=min(i,prime[i]);
			}
		}
	}
	// for (int i = 0; i < 10; ++i)
	// {
	// 	cout<<prime[i]<<" ";
	// }
	// cout<<endl;
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int f=3;
	int gc=arr[0];
	for (int i = 1; i < n; ++i)
	{
		// cout<<gcd(6,10);
		gc=gcd(gc,arr[i]);

	}
	if(gc==1)
		f=2;
	if(f==2){
		// map<int,bool> m;
		int falg=1;
		map<int,bool> m;
		int num=prime[arr[0]];
		m[num]=true;		
		for (int i = 1; i < n; ++i)
		{
			if(prime[arr[i]]!=INT_MAX&&m[prime[arr[i]]])
				falg=0;
			m[prime[arr[i]]]=true;
		}
		if(falg==1)
			f=1;
	}
	if(f==1)
		cout<<"pairwise coprime";
	else if(f==2)
		cout<<"setwise coprime";
	else
		cout<<"not coprime";
	cout<<endl;
	return 0;
}