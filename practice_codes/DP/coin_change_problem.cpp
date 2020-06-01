/*
Coin Change Problem
Send Feedback
You are given an infinite supply of coins of each of denominations D = 
{D0, D1, D2, D3, ...... Dn-1}. You need to figure out the total number of ways W, in 
which you can make change for Value V using coins of denominations D.
Note : Return 0, if change isn't possible.
Input Format
Line 1 : Integer n i.e. total number of denominations
Line 2 : N integers i.e. n denomination values
Line 3 : Value V
Output Format
Line 1 :  Number of ways i.e. W
Constraints :
1<=n<=10
1<=V<=1000
Sample Input 1 :
3
1 2 3
4
Sample Output
4
Sample Output Explanation :
Number of ways are - 4 total i.e. (1,1,1,1), (1,1, 2), (1, 3) and (2, 2).
*/
#include<bits/stdc++.h>
using namespace std;
//#define forn(i,s,n) for(int i=s;i<=n;i++)
typedef long long ll;
int iterativedp(int arr[],int n,int v){
    ll dp[1000];
    for(int i=0;i<=1000;i++)
     dp[i]=0;
    // for(int i=0;i<=n-1;i++){
    //     dp[i]=1;
    //     for(int j=i;i<=1,n;i++-1){             
    //         dp[arr[j]+i]+=1;
    //     }
    // }
    for(int i=0;i<=n-1;i++){
        dp[arr[i]]=1;
    }
    for(int i=1;i<=v;i++){
        for(int j=0;j<=n-1;j++){
            if(i-arr[j]>0){
             dp[i]+=dp[i-arr[j]];   
              cout<<i<<" i "<<endl;
            }
             
        }
    }
    for(int i=1;i<=v;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    cout<<dp[v];
}
ll dp[1000][10];
int recursive(int arr[],int n,int v,int sum=0,int idx=0){
   if(sum<0)
    return 0;
   if(sum==0)
    return 1;
    int a=0;
    if(dp[sum][idx]){
        return dp[sum][idx];
     }
        
        for(int i=idx;i<n;i++){
          a+=recursive(arr,n,v,sum-arr[i],i);
        }
        dp[sum][idx]=a;
        return a;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
     cin>>arr[i];
    int v;
    cin>>v;
    cout<<recursive(arr,n,v,0);    
}