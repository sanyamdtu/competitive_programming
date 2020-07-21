#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int recursive(string s,char ch,int i,int j,int n){
	if(i>j)
		return 0;
	if(i==j)
		return (s[i]==ch)? 0: 1;
	int c1=0;
	for (int l=i;l<=(i+(j-i)/2);l++)
	{
		if(ch!=s[l])
			c1++;
	}
	int minc1=recursive(s,ch+1,(i+(j-i)/2)+1,j,n)+c1;
	int c2=0;
	for (int l=(i+(j-i)/2)+1;l <=(j); ++l)
	{
		if(ch!=s[l])
			c2++;
	}
	int mic2=recursive(s,ch+1,i,(i+(j-i)/2),n)+c2;
	return min(mic2,minc1);
}
int recur(string s,char ch,int n){
	if(n==1)
		return (s[0]==ch)? 0: 1;
	int c1=0;
	for (int l=0;l<n/2;l++)
	{
		if(ch!=s[l])
			c1++;
	}
	int minc1=recur(s.substr((n/2),n),ch+1,s.substr((n/2),n).length())+c1;
	int c2=0;
	for (int l=n/2;l <n; ++l)
	{
		if(ch!=s[l])
			c2++;
	}
	int mic2=recur(s.substr(0,(n/2)),ch+1,s.substr(0,(n/2)).length())+c2;
	return min(mic2,minc1);
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
		string s;
		cin>>s;
		cout<<recur(s,'a',n)<<endl;
	}
	return 0;
}