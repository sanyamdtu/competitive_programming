#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        int n,a,b;
        cin>>n>>a>>b;
        for(int i=0;i<n;){
            char ch='a';
            for(int j=0;j<b && i<n;j++){
                s.push_back(ch);
                ch++;   
                i++;
            }
        }
        cout<<s<<endl;        
    }
    return 0;    
}