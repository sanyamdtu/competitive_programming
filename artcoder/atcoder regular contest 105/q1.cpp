 #include<bits/stdc++.h>
 using namespace std;
 #define pb  push_back
 #define mod 1000000007
 #define INF 1e18
 typedef  long long ll;
 
 int main()
 {
 	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	ll a,b,c,d;
 	cin>>a>>b>>c>>d;
 	if(a+b+c==d||a+b+d==c||a+b==c+d||a+c==b+d||a+d==c+b||a+b+d==c||a+d+c==b||b+c+d==a)
 		cout<<"Yes";
 	else
 		cout<<"No";
 	return 0;
 }