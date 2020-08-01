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
	int arr[n][n];
	memset(arr,0,sizeof(arr));
	int i=0,j=n-1,c=1;
	while(c<=n*n){
		if(arr[j][i]==0){
			arr[j][i]=c;
			if(c%n==0)
				i++;
			else
				j=(j+1)%n;
			if(c%n==1)
				j=0;
			c++;
		}
		else
			j=(j+1)%n;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}