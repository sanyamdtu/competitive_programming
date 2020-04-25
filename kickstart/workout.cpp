#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int j=1;j<=t;j++){
        int n, b;
        cin>>n>>b;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr, arr+n);
        int num=0;
        int i=0;
        while (b>=arr[i] && i<n)
        {
            b=b-arr[i];
            num++;
            i++;
        }
        cout<<"Case #"<<j<<": "<<num<<endl;        
    }
    
    return 0;
    
}