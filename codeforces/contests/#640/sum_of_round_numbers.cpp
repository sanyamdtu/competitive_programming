#include<bits/stdc++.h>
using namespace std;
//#define forn(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,num,in=0;
        cin>>n;
        vector<int> v;
        while(n>0){
            int r = (n%10);
            if(r!=0){
                num = r*pow(10,in);
                v.push_back(num);
                cout<<num<<" ";
            }
            n=n/10;
            in++;
        }
        cout<<endl;
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}