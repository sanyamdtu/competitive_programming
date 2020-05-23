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
Sample Output 1 :
4
*/
#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int n;
    cin>>n;
    ll arr[n];
    forn(i,n)
     cin>>arr[n];
    
}