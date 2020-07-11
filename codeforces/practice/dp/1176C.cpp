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
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int a,b,c,d,e,f;
	a=b=c=d=e=f=0;
	for(int i=0;i<n;i++){
		if(arr[i]==4){
			a++;
		}
		else if(arr[i]==8){
			b+=(a>0)?1:0;
			a=(a>0)?a-1:a;
		}
		else if(arr[i]==15){
			c+=(b>0)?1:0;
			b=(b>0)?b-1:b;
		}
		else if(arr[i]==16){
			d+=(c>0)?1:0;
			c=(c>0)?c-1:c;
			
		}
		else if(arr[i]==23){
			e+=(d>0)?1:0;
			d=(d>0)?d-1:d;
		}
		else if (arr[i]==42){
			f+=(e>0)?1:0;
			e=(e>0)?e-1:e;
		}
	}
	cout<<n-6*f;
	return 0;
}