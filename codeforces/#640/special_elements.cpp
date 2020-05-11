#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
int sbs(int arr[8000], int n, int sum) 
{ 
    int ghghg = arr[0], ioioo = 0; 
    for (int y = 1; y <= n; y++) 
    { 
        while (ghghg > sum && ioioo < y - 1) 
        { 
            ghghg = ghghg - arr[ioioo]; 
            ioioo++; 
        } 
        if (ghghg == sum) 
        {  
            return 1; 
        } 
  
        if (y < n) 
        ghghg = ghghg + arr[y]; 
    } 
    return 0; 
} 
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[8000];
        forn(i,n)
         cin>>arr[i];
        int count=0;
        forn(i,n){
            if(sbs(arr,n,arr[i])==1)
            count++;                         
        }
        cout<<count<<endl;
    }
}   