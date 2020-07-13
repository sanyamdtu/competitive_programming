#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
		int *p=new int[10];
		for (int i = 0; i < 10; ++i)
		{
			p[i]=i;
		}
		for (int i = 0; i < 10; ++i)
		{
			cout<<p[i]<<" ";
		}
		delete []p;
		return 0;

}