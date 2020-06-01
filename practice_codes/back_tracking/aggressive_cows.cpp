/*
Aggressive Cows Problem
Send Feedback
Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls 
are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).
His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards 
each other once put llo a stall. To prevent the cows from hurting each other, FJ 
wants to assign the cows to the stalls, such that the minimum distance between any 
two of them is as large as possible. What is the largest minimum distance?
Input
t – the number of test cases, then t test cases follows. 
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi
Output
For each test case output one integer: the largest minimum distance.
Sample Input :
1
5 3
1
2
8
4
9
Sample Output:
3 
Output details:
FJ can put his 3 cows in the stalls at positions 1, 4 and 8, 
resulting in a minimum distance of 3.
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(i,n) for(int i=0;i<n;i++)
bool possible(ll arr[],int n,int c,ll x){
    int cow=1;
    ll s=0;
    for(int i=0;i<n;i++){
        if(s+arr[i]>=x){
            cow++;
            s=0;
        }
        else{
            s+=arr[i];
        }
    }
    if(s>=x){
        cow++;
        s=0;
    }
    if(cow<c)
     return false;
    return true;
}
ll findpages(ll arr[],int n,int c){
    ll u=0;
    for(int i=0;i<n;i++)
     u+=arr[i];
    ll beg=0,last=u,maxi=INT_MIN;
    while(beg<=last){
        ll mid=(beg+last)/2;
        if(possible(arr,n,c,mid)){
            beg=mid+1;
            maxi=max(mid,maxi);
        }
        else{
            last=mid-1;
        }
    }
    return maxi;
}
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        int n,c;
        cin>>n>>c;
        ll a[n],arr[n-1];
        forn(i,n)
         cin>>a[i];
        sort(a,a+n);
        for(ll i=1;i<n;i++)
          arr[i-1]=a[i]-a[i-1];
        cout<<findpages(arr,n-1,c)<<endl;
    }
}