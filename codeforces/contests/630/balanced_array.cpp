#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    forn(l,t){
        ll n;
        cin>>n;
        int arr[n],c=0;
        for(int i=2;i<=n;i+=2){
            arr[c]=i;
            c++;
        }
        for(int i=1;i<n;i+=2){
            arr[c]=i;
            c++;
        }
        arr[n-1]=n/2+2+arr[n-2];
        if(n%4!=0)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            forn(i,n)
            cout<<arr[i]<<" ";
            cout<<endl;
        }       
    }
}