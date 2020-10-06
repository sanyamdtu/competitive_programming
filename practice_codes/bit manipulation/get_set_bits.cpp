#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int divideby2(int n,int p){
	return (n>>p);
}
int multiplyby2(int n,int p){
	return (n<<p);
}
bool isodd(int n){
	return (n&1);
}
int getbit(int n,int i){
	return (n>>(i-1))&1;
}
int setbit(int n,int i,int a){
	i=i-1;
	int mask=(1<<i);
	mask=~mask;
	return (mask&n)|(a<<i);
}
int clearbit(int n,int i){
	i=i-1;
	int mask=(1<<i);
	mask=~mask;
	return (mask&n);
}
int clear_last_i_bits(int n,int i){
	int mask=(1<<i)-1;
	mask=~mask;
	return mask&n;
}
int clear_range_bits(int n,int i,int j){
	int mask=(1<<i)-1;
	int mask2=(1<<(j-1))-1;
	mask2=~mask2;
	mask=mask&mask2;
	mask=~mask;
	return n&mask;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int a=1;
	int b=2;
	// cout<<clear_range_bits(31,4,2);
	return 0;
}