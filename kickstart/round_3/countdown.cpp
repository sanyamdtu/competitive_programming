#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    forn(l,t){
        int n,k,count=0;
        cin>>n>>k;
        int arr[n];
        forn(i,n)
         cin>>arr[i];
        forn(i,n){
            if(arr[i]==k){
                int num=arr[i];
                while(i<n&&arr[i]==num&&num){
                    i++;
                    num--;
                }
                if(!num)
                 count++;
                 i--;
            }
        }
        cout<<"Case #"<<l+1<<": "<<count<<endl;
    }
}