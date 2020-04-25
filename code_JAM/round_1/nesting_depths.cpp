#include<bits/stdc++.h>
using namespace std;
#define for(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    for(l,t){
        string s,ans;
        cin>>s;
        int live_count_open=0;
        for(i,s.length()){
            if(live_count_open<s[i]-'0'){
                    for(j,s[i]-'0'-live_count_open){
                        ans.push_back('(');
                    }
                    live_count_open=s[i]-'0';
            }
            else{
                    for(j,live_count_open-(s[i]-'0')){
                        ans.push_back(')');
                       }
                    live_count_open=s[i]-'0';
            }
            ans.push_back(s[i]);            
        }
        for(i,live_count_open)
         ans.push_back(')');
        cout<<"Case #"<<l+1<<": "<<ans<<endl; 
    }
    return 0;
} // namespace name
