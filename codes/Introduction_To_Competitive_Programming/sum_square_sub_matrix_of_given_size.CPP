#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
      cin>>arr[i][j];
    for(int i=0;i<n;i++)
        for(int j=1;j<n;j++)
            arr[i][j]+=arr[i][j-1];
    for(int i=1;i<n;i++)
        for(int j=0;j<n;j++)
            arr[i][j]+=arr[i-1][j];
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++)
      cout<<arr[i][j]<<" ";
     cout<<endl;
    }
    int k;
    cin>>k;
    for(int i=0;i<n-k;i++){
        for(int j=0;j<n-k;i++){
            
        }
    }
}
