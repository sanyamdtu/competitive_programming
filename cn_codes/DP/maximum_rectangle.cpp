/*
Maximum Sum Rectangle
Send Feedback
Given a 2D array, find the maximum sum rectangle in it. In other words find maximum 
sum over all rectangles in the matrix.
Input
First line contains 2 numbers n and m denoting number of rows and number of columns. 
Next n lines contain m space separated integers denoting elements of matrix nxm.
Output
Output a single integer, maximum sum rectangle.
Constraints
1<=n,m<=100
Sample Input
4 5
1 2 -1 -4 -20
-8 -3 4 2 1
3 8 10 1 3
-4 -1 1 7 -6
Sample Output
29
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
      cin>>arr[i][j];
    int dp[n][m];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
        }
    }
}