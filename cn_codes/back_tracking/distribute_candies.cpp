/*
Distribute Candies
Send Feedback
Shaky has N (1<=N<=50000) candy boxes each of them contains a non-zero number of 
candies (between 1 and 1000000000). Shaky want to distibute these candies among his K 
(1<=K<=1000000000) IIIT-Delhi students. He want to distibute them in a way such that:
1. All students get equal number of candies.
2. All the candies which a student get must be from a single box only.
As he want to make all of them happy so he want to give as many candies as possible. 
Help Shaky in finding out what is the maximum number of candies which a student can 
get.
Input
First line contains 1<=T<=20 the number of test cases. Then T test cases follow. 
First line of each test case contains N and K. Next line contains N integers, ith of 
which is the number of candies in ith box.
Output
For each test case print the required answer in a seperate line.
Sample Input:
2
3 2 
3 1 4
4 1
3 2 3 9
Sample Output:
3
9
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ispossible(ll arr[],int n,ll mid,ll c){
    ll sum=0,temp[n],k=0;
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(temp[i]>=mid){
            temp[i]-=mid;
            k++;
            if(k==c)
              return true;
            if(temp[i]>=mid)
             i++;
        }
        else
         break;
    }
    return false;
}
ll func(ll arr[],int n,ll last,ll c){
    //cout<<"ok";
    ll beg=0;
    ll mid=(beg+last)/2,maxi=INT_MIN;
    while(beg<=last){
        mid=(beg+last)/2;
        if(ispossible(arr,n,mid,c)){
            maxi=max(maxi,mid);
            beg=mid+1;
        }
         
        else
         last=mid-1;
    }
    //  cout<<"ok";
    return maxi;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        ll k, arr[n];
        cin>>k;
        for(int i=0;i<n;i++)
         cin>>arr[i];
        sort(arr,arr+n);
        ll maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        // cout<<"ok";
        cout<<func(arr,n,maxi,k)<<endl;
        //cout<<ispossible(arr,n,66,31);
    }
    
}