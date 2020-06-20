#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        string sa;
        for(int i=0;i<n;i++){
            cin>>sa;
            for(int j=0;j<n;j++)
                arr[i][j]  = sa[i]-'0';
        }

        int a=1;

        for(int i=0;i<n-1;i++){
            //cin>>sa;
            for(int j=0;j<n-1;j++){
                if(arr[i][j]){
                    if(arr[i+1][j]==1 && arr[i][j+1]==1){
                       ; 
                    }
                    else{

                        a=0;
                        break;
                    }

                }
            }
            if(a==0)
                break;
        }


        if(a==1)
            cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }

    
}