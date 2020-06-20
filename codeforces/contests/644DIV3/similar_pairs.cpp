#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
            int n;
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
             cin>>arr[i];
            int odd=0,even=0,diff=0;
            sort(arr,arr+n);
            for(int i=0;i<n;i++){
                if(arr[i]%2)
                 odd++;
                else
                    even++;                
            }
            for(int i=1;i<n;i++){
                if(arr[i]-arr[i-1]==1)
                 diff++;
            }
            //cout<<even<<diff<<odd;
            if((even%2==0&&odd%2==0)||(even%2==1&&odd%2==1&&diff>0))
              cout<<"YES"<<endl;
            else
             cout<<"NO"<<endl;
    }
    
}