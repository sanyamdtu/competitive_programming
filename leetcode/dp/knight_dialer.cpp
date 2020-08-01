#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int cmoves(int n,int m,int k,int r,int c,double arr[][26][101],int X[],int Y[]){
        if(r<0||c<0||r>m-1||c>n-1)
            return 0;
        if(k==0)
            return 1;
        double a=0;
        if(arr[r][c][k]!=0)
            return arr[r][c][k];
        for (int i = 0; i < 8; ++i)
        {
            a+=cmoves(n,k-1,r+X[i],c+Y[i],arr,X,Y);
        }
        arr[r][c][k]=a;
        return a;
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
		
	}
	return 0;
}