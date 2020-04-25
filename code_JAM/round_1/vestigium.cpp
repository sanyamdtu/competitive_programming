#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int l=1;l<=t;l++)
    {
        /* code */
        int n,r=0,c=0;
        cin>>n;
        int sumr=0,sumk=0,sumc=0;
        int arr[n][n];
        for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
          cin>>arr[i][j];
        for(int i=0;i<n;i++){
            sumr=0;
            for(int j=0;j<n;j++){
                if(i==j){
                    sumk+=arr[i][j];
                }
                if(sumr==0)
                for(int k=0;k<j;k++){
                    if(arr[i][j]==arr[i][k]){
                        sumr=1;
                        r++;
                        break;
                    }
                }                
            }
        }
        for(int i=0;i<n;i++){
            sumc=0;
            for(int j=0;j<n;j++){
                if(sumc==0)
                for(int k=0;k<j;k++){
                    if(arr[j][i]==arr[k][i]){
                        c++;
                        sumc=1;
                        break;
                    }
                }
            }
        }
        cout<<"Case #"<<l<<": "<<sumk<<" "<<r<<" "<<c<<endl; 
    }
    
}