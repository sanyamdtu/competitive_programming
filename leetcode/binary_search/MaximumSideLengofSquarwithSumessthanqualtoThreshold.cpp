#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

bool func(int a,int arr,int n,int m){
    int f=0;
    for(int i=0;i<n-a+1;i++){
        for(int j=0;j<m-a+1;j++){
            int sum=arr[i+a-1][j+a-1];
            
            if(sum<=h){
                f=1;
            }
        }
    }
}
int maxSideLength(vector<vector<int>> mat, int key) {
    int n=mat.size(),m;
    if(n==0)
        m==0;
    else
        m=mat[0].size();
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++ ){
            arr[i][j]=mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++)
            arr[i][j]+=arr[i][j-1];
    }
    for(int i=0;i<m;i++){
        for(int j=1;j<n;j++)
            arr[j][i]+=arr[j-1][i];
    } 
    
    int beg=0,last=max(m,n),ans=0;
    while(beg<=last){
        if(func(mid,mat,key)){
            ans=max(mid,ans);
            beg=mid+1;
        }
        else
            last=mid-1;
    }
    return ans;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		for
	}
	return 0;
}