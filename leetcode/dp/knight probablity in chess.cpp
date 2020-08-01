#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int X[8] = { 2, 1, -1, -2, -2, -1, 1, 2 }; 
int Y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int cmoves(int n,int k,int r,int c,int arr[][]){
	if(r<0||c<0||r>n-1||c>n-1)
		return 0;
	if(k==0)
		return 1;
	int a=0;
	if(arr[r][c][k]!=-1)
		return arr[r][c][k];
	for (int i = 0; i < 8; ++i)
	{
		a+=cmoves(n,k-1,r-Y[i],c-X[i],arr);
	}
	return arr[r][c][k]=a;
}


int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,k,r,c;
	cin>>n>>k>>r>>c;
	int arr[26][26][100];
	memset(arr,-1,sizeof(arr));
	cout<<float((0.125)*(cmoves(n,k,r,c,arr)));
	return 0;
}