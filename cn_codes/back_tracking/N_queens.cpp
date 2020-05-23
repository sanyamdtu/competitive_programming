/*
N-Queen Problem
Send Feedback
You are given N, and for a given N x N chessboard, find a way to place N queens such 
that no queen can attack any other queen on the chess board. A queen can be killed 
when it lies in the same row, or same column, or the same diagonal of any of the other
queens. You have to print all such configurations.
Input Format :
Line 1 : Integer N
Output Format :
One Line for every board configuration. 
Every line will have N*N board elements printed row wise and are separated by space
Note : Don't print anything if there isn't any valid configuration.
Constraints :
1<=N<=10
Sample Input 1:
4
Sample Output 1 :
0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0 
*/
#include<bits/stdc++.h>
using namespace std;
int n;
bool back_track(int count,int i,int j,int n,int arr[][10]){
    if(count==n){
        for(int k=0;k<n;k++){
            for(int l=0;l<n;l++)
             cout<<arr[k][l]<<" ";
        }
        cout<<endl;
        return false;
    }
    if(i==n||j==n)
     return false;
    int flag=1;
    for(int k=0;k<n;k++){
        if(arr[k][j]||arr[i][k])
         flag=0;
    }
    for(int k=0;k<i;k++){
       for(int l=0;l<n;l++)
           if(i+j==k+l)
               if(arr[k][l])
                flag=0;
    }
    for(int k=i,l=j;k>=0&&l>=0;k--,l--){
        if(arr[k][l])
            flag=0;
    }
    arr[i][j]=1;
    if(flag&&back_track(count+1,i+1,0,n,arr))
     return true;
    arr[i][j]=0;
    return back_track(count,i,j+1,n,arr);
}
int main(){
    cin>>n;
    int arr[10][10];
    memset(arr,0,sizeof(arr));
    int a=back_track(0,0,0,n,arr);
}