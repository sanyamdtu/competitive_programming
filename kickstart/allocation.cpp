#include<bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin>>test;
    for(int t=1;t<=test;t++){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int ans=0;
        int max_work[n];
        int yes = 0;
        int idx;
        
        for(int i=1;i<n;i++){
            max_work[i] = arr[i]-arr[i-1];
            if(yes<max_work[i]){
                yes = max_work[i];
                idx = i;
            }
        }
        if(yes==1){
            ans = 1;
        }
        else{
            max_work[idx] = yes/2;
            if(yes%2==1)
                max_work[idx]++;
            yes = 0;
            for(int i=1;i<n;i++)
                yes = max(yes, max_work[i]);
            ans = yes;
        }
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }

    return 0;
}