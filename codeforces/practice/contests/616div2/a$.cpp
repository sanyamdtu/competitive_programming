#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				arr[i][j]=0;
			}
		}

		for(int i=0;i<n&&k>0;i++){
			for(int j=0;j<n&&k>0;j++){
				if(i==j){
					k--;
					arr[i][j]=1;
				}
				else if(i+j==n-1&&i!=j){
					k--;
					arr[i][j]=1;
				}
			}
		}
		bool flag=true;
		int j=1,i=2;
		while(k>0){
				if(i<n&&flag&&k>0){
					for(int l=j;l<n&&k>0;l++){
						if(arr[l-1][l]!=1){
							arr[l-1][l]=1;
							k--;
						}
				    }
				    i++;
			    }
			    else if(j<n&&!flag&&k>0){
					for(int l=i;l<n&&k>0;l++){
						if(arr[l][l-2]!=1){
							arr[l][l-2]=1;
							k--;
						}
				    }
				    j++;
			    }
			    flag=!flag;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cout<<arr[i][j]<<" ";
			cout<<endl;
		}


		for(int i=0;i<)

	}
	return 0;
}