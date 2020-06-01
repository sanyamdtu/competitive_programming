/*
Inversion Count
Send Feedback
Let A[0 ... n-1] be an array of n distinct positive integers. If i < j and A[i] > A[j]
then the pair (i, j) is called an inversion of A (where i and j are indexes of A). 
Given an integer array A, your task is to find the number of inversions in A.
Input format :
Line 1 : n, array size
Line 2 : Array elements (separated by space).
Output format :
Count of inversions
Constraints :
1 <= n <= 10^5
1 <= A[i] <= 10^9
Sample Input 1 :
3
3 2 1
Sample Output 1 :
3
Sample Input 2 :
5
2 5 1 3 4
2 5 1   3 4
2 5   1    3    4
25   1      34
1 2 5    3 4 
1 2 3 4 

Sample Output 1 :
4
*/
#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
ll inversion(ll arr[],int n,int s,int e){
    if(s>=e)
     return 0;  
    int mid=(s+e)/2;
    ll l_count=inversion(arr,n,s,mid);
    ll r_count=inversion(arr,n,mid+1,e);
    int size=e-s,c=0;
    int temp[size],i,j;
    ll count=0;
    for(i=s,j=mid+1;i<=mid&&j<=e;){
        if(arr[i]>arr[j]){
            temp[c]=arr[j];
            count+=mid+1-i;
            c++;
            j++;
        }
        else{
            temp[c]=arr[i];
            i++;
            c++;
        }
    }
    //cout<<"o";
    while(i<=mid){
        temp[c]=arr[i];
        i++;
        c++;
    }
    //cout<<"o";
    while (j<=e)
    {
        temp[c]=arr[j];
        j++;
        c++;
    }
    for(int l=0;l<c;l++,s++){
        arr[s]=temp[l];
    }
    return l_count+r_count+count;     
}
int main(){
    int n;
    cin>>n;
    ll arr[n];
    forn(i,n)
     cin>>arr[i];
    cout<<inversion(arr,n,0,n-1)<<endl;
    
}   