#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--){
        string ans;
        int n2,n1,n0;
        cin>>n0>>n1>>n2;
        if(n2){
            ans.push_back('1');
            while(n2){
              ans.push_back('1');
              n2--;
              if(n2){
                ans.push_back('1');
                n2--;
              }
            }
        }
        
        if(n1){
            if(ans.size()){
                ans.push_back('0');
                n1--;
            }
            
            while(n1>1){
                ans.push_back('1');
                n1--;
                if(n1){
                    ans.push_back('0');
                    n1--;
                }                  
            }
            if(n1){
                if(!ans.empty()&&ans.back()=='0'){
                    ans.push_back('1');
                    ans.push_back('0');
                }
                else{
                    ans.push_back('1');
                    ans.push_back('0');
                }
                
            }
        }
        if(n0){
            if(!ans.empty()&& ans.back()=='0'){
                n0--;
                ans.push_back('0');
            }
            else {
                n0--;
                ans.push_back('0');
                ans.push_back('0');
            }
            while(n0){
              ans.push_back('0');
              n0--;
              if(n0){
                ans.push_back('0');
                n0--;
              }
            } 
        }
        cout<<ans<<endl;                      
    }
}