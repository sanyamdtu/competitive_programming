#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n],count=1;
        char ans[n];
        ans[n]='\0';
        memset(ans,'0',sizeof(ans));
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]==arr[n-1]){
            ans[0]=ans[n-1]='1';
        }
        else{
            ans[0]='1';
            ans[n-1]='2';
            count++;
        }
        for (int i = 1; i < n-1;i++)
        {
            if(arr[i]==arr[i-1]){
                ans[i]=ans[i-1];
            }                
            else{
                (ans[i-1]=='1')?ans[i]='2':ans[i]='1';
            }
        }
        if(ans[n-2]==ans[n-1] && arr[n-1]!=arr[n-2])
         ans[n-2]='3';
        for(int i=0;i<n;i++)
         cout<<ans[i]<<" ";
        cout<<endl;
    }
     
    return 0;
}