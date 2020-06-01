/*
Magic Grid Problem
Send Feedback
You are given a magrid S ( a magic grid ) having R rows and C columns. Each cell in 
this magrid has either a Hungarian horntail dragon that our intrepid hero has to 
defeat, or a flask of magic potion that his teacher Snape has left for him. A dragon 
at a cell (i,j) takes away |S[i][j]| strength points from him, and a potion at a cell 
(i,j) increases Harry's strength by S[i][j]. If his strength drops to 0 or less at any 
point during his journey, Harry dies, and no magical stone can revive him.
Harry starts from the top-left corner cell (1,1) and the Sorcerer's Stone is in the 
bottom-right corner cell (R,C). From a cell (i,j), Harry can only move either one cell
down or right i.e., to cell (i+1,j) or cell (i,j+1) and he can not move outside the
magrid. Harry has used magic before starting his journey to determine which cell 
contains what, but lacks the basic simple mathematical skill to determine what minimum
strength he needs to start with to collect the Sorcerer's Stone. Please help him once
again.
Input (STDIN)
The first line contains the number of test cases T. T cases follow. Each test case 
consists of R C in the first line followed by the description of the grid in R lines, 
each containing C integers. Rows are numbered 1 to R from top to bottom and columns 
are numbered 1 to C from left to right. Cells with S[i][j] < 0 contain dragons, 
others contain magic potions.
Output (STDOUT):
Output T lines, one for each case containing the minimum strength Harry should start 
with from the cell (1,1) to have a positive strength through out his journey to the 
cell (R,C).
Constraints:
1 ≤ T ≤ 5

2 ≤ R, C ≤ 500

-10^3 ≤ S[i][j] ≤ 10^3

S[1][1] = S[R][C] = 0
Sample Input
3
2 3
0 1 -3
1 -2 0
2 2
0 1
2 0
3 4
0 -2 -3 1
-1 4 0 -2
1 -2 -3 0
Sample Output
2
1
2
*/

#include<bits/stdc++.h>
using namespace std;
// void iterativedp(int r,int c,int arr[][10]){
//     int dp[r][c];
//         memset(dp,0,sizeof(dp));
//         dp[r-1][c-1]=arr[r-1][c-1];
//         for(int i=r-1;i>=1;i--)
//          dp[i-1][c-1]+=arr[i-1][c-1]+dp[i][c-1];
//         for(int i=c-1;i>=1;i--)
//          dp[r-1][i-1]+=arr[r-1][i-1]+dp[r-1][i];
//         for(int i=r-1;i>=1;i--)
//          dp[i-1][0]+=arr[i-1][0]+dp[i][0];
//         for(int i=c-1;i>=1;i--)
//          dp[0][i-1]+=arr[0][i-1]+dp[0][i];
        
//         for(int i=r-2;i>=0;i--){
//             for(int j=c-2;j>=0;j--){
//                 dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
//                 if(arr[i][j]<0)
//                  arr[i][j]--;                 
//                 dp[i][j]+=arr[i][j];
//             }
//         }
//         for(int i=0;i<r;i++){
//              for(int j=0;j<c;j++)
//               cout<<dp[i][j]<<" ";
//             cout<<endl;
//         }
//         if(dp[0][0]>=0){
//             cout<<1<<endl;
//         }
//         else
//         {
//             cout<<"opp";
//             cout<<abs(dp[0][0])<<endl;
//         }
        
// }
int recursive_dp(int r,int c,int arr[][500],int i,int j,int dp[][500]){
    if(i==r-1&&j==c-1){
        return 1;
    }
    if(i>r-1||j>c-1)
     return INT_MAX;
     if(dp[i][j]>0)
     return dp[i][j];

    int l=recursive_dp(r,c,arr,i,j+1,dp);
    int u=recursive_dp(r,c,arr,i+1,j,dp);
    int a=min(l,u);
    a-=arr[i][j];
       if(a<=0){
        dp[i][j]=1;
        return 1;
    }
    dp[i][j]=abs(a);
    return abs(a);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int arr[500][500];
        for(int i=0;i<r;i++)
         for(int j=0;j<c;j++)
          cin>>arr[i][j];
        int dp[500][500];
        memset(dp,-1,sizeof(dp));
        int a=recursive_dp(r,c,arr,0,0,dp);
        cout<<a<<endl;    
    }
}