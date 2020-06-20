#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int temp=max(a,b);
        b=min(a,b);
        a=temp;
        if(2*b<a){
            cout<<a*a<<endl;
        }
        else
        {
            cout<<4*b*b<<endl;
        }
        
    }
    
}