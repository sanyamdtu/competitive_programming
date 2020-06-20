#include<bits/stdc++.h>
using namespace std;
#define forn(kuu,n) for(int kuu=0;kuu<n;kuu++)
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int ii=0;ii<t;ii++){
        string s;
        cin>>s;
        int u898[4]={-1,-1,-1,-1};
        int miiioo99=INT_MAX,iiioo99=0;
        for(int kuu=0;s[kuu]!='\0';kuu++){
            u898[s[kuu]-'0']=kuu;
            if(u898[1]!=-1&&u898[2]!=-1&&u898[3]!=-1){
                int s=min(u898[1],min(u898[2],u898[3]));
                int l=max(u898[1],max(u898[2],u898[3]));
                iiioo99=l-s+1;
                miiioo99=min(miiioo99,iiioo99);
            }
        }
        if(miiioo99==INT_MAX)
         cout<<0<<endl;
        else
         cout<<miiioo99<<endl;
    }
}