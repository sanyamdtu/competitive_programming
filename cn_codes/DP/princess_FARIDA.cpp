#include<bits/stdc++.h>
using namespace std;
#define forn(i,s,n) for(int i=s;i<=n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    forn(l,1,t){
    int n;
    cin>>n;
    ll arr[n];
    forn(i,0,n-1)
     cin>>arr[i];
    ll dp[10000][2];//0 means not included and 1 means included
    memset(dp,0,sizeof(dp));
    dp[0][0]=0;
    dp[0][1]=arr[0];
    forn(i,1,n-1){
        dp[i][0]=max(dp[i-1][1],dp[i-1][0]);
        dp[i][1]=dp[i-1][0]+arr[i];
    }
    cout<<"Case "<<l<<": "<<max(dp[n-1][0],dp[n-1][1])<<endl;
    }
}