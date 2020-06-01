/*
Given a sequence A of size N, find the length of the longest increasing subsequence 
from a given sequence .
The longest increasing subsequence means to find a subsequence of a given sequence in 
which the subsequence's elements are in sorted order, lowest to highest, and in which 
the subsequence is as long as possible. This subsequence is not necessarily contiguous
, or unique.

Note: Duplicate numbers are not counted as increasing subsequence.

Input:
The first line contains an integer T, depicting total number of test cases. Then 
following T lines contains an integer N depicting the size of array and next line 
followed by the value of array.

Output:
For each testcase, in a new line, print the Max length of the subsequence in a 
separate line.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000
0 ≤ A[i] ≤ 300

Example:
Input:
2
16
0 8 4 12 2 10 6 14 1 9 5 13 3 11 7 15
6
5 8 3 7 9 1

Output:
6
3

Explanation:
Testcase 2: Longest increasing subsequence is of size 3 with elements (there are many
subsequence, but listing one of them): 5 7 9.
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int lis(vector<int> v){
    int curr_len=1,max_len=0;
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1])
         curr_len++;
        else{
            max_len=max(curr_len,max_len);
            curr_len=1;
        }   
    }
    return max(max_len,curr_len);
}
int recursion(int *arr,int n,int idx,vector<int> v,int dp[][1000]){
    int s=v.size();
    if(s>=2&&v[s-1]>=v[s-2]){
        dp[v.front()][v.back()]=max(s-1,dp[v.front()][v.back()]);
        return dp[v.front()][v.back()];
    }
     
    if(idx<=-1){
        if(!v.empty())
        dp[v.front()][v.back()]=max(s,dp[v.front()][v.back()]);
        return dp[v.front()][v.back()];
    }
    if(!v.empty()&&dp[v.front()][v.back()]!=0){
        return dp[v.front()][v.back()];
    }
    int a=recursion(arr,n,idx-1,v,dp);
    v.push_back(arr[idx]);
    int b=recursion(arr,n,idx-1,v,dp);
    dp[v.front()][v.back()]=max(a,b);
    return max(a,b);
}

// int lis(int arr[], int idx, int n){
//     int maxl=1, currl = 0;
//     for(int i=idx;i<n;i++){
//         currl = lis(arr, idx+1, n);
//         if(arr[i]>arr[idx])
//             currl++;
//         maxl = max(maxl, currl);
//     }
// }
int ls(int arr[],int n,int idx){
    if(idx==0)
     return 1;
    int a=0,maxi=1;
    for(int i=0;i<idx;i++){
         a=ls(arr,n,i);        
        if(arr[i]<arr[idx]){
            a=ls(arr,n,i)+1;
            cout<<"po";
        }
         
        maxi=max(a,maxi);
    }
    
    return max(maxi,a);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
         cin>>arr[i];
        vector<int> v;
        memset(dp,0,sizeof(dp));
        cout<<ls(arr,n,n-1)<<endl;
    }
}