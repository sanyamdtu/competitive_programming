#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
void multiply(int M[][2],int A[][2]){
	int f=M[0][0]*A[0][0]+M[0][1]*A[1][0];
	int l=A[0][1]*M[1][0]+A[1][1]*M[1][1];
	int s=M[0][0]*A[0][1]+M[0][1]*A[1][1];
	int t=M[1][0]*A[0][0]+M[1][1]*A[0][1];
	M[0][0]=f;
	M[0][1]=s;
	M[1][0]=t;
	M[1][1]=l;
}

void power(int M[][2],int n){
	if(n==0||n==1)
		return ;
	power(M,n/2);
	multiply(M,M);
	int A[2][2]={{1,1},{1,0}};
	if(n%2==1)
		multiply(M,A);
}

int fibonacci(int n){
	int A[2][2]={{1,1},{1,0}};
	power(A,n);
	return A[0][0];
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}