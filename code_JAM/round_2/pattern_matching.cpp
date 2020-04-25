#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
bool comp_last(string a,string b){
    string::iterator ita,itb;
    ita = find (a.begin(), a.end(),'*'); 
    int ans_a=a.end()-ita;
    itb= find(b.begin(),b.end(),'*');
    int ans_b=b.end()-itb;
    return (ans_a>ans_b);   
}
bool comp_first(string a,string b){
    string::iterator ita,itb;
    ita = find (a.begin(), a.end(),'*'); 
    int ans_a=ita-a.begin();
    itb= find(b.begin(),b.end(),'*');
    int ans_b=itb-b.begin();
    return (ans_a>ans_b);   
}
int main(){
    
    int t;
    cin>>t;
    forn(l,t){
        string ans;
        string *s=new string[50];
        string *first_sort_s=new string[50];
        string *last_sort_s=new string[50];
        int n;
        cin>>n;
        forn(i,n){
            cin>>s[i];
            first_sort_s[i]=s[i];
            last_sort_s[i]=s[i];
        }
        // string first_part,ans_first_part;
        // int curr_first_part_length=0,max_first_part_length=INT_MIN;
        // forn(i,n){
        //     for(int j=0;s[i][j]!='*';j++){
        //         first_part.push_back(s[i][j]);
        //     }
        //     if(ans_first_part.length()<first_part.length()){

        //     }
        // }
        sort(last_sort_s,last_sort_s+n,comp_last);
        sort(first_sort_s,first_sort_s+n,comp_first);
        if(first_sort_s[0][0]=='*'){
            //task 1
            int flag=1;
            forn(i,n){
                for(int j=1;first_sort_s[i][j]!='\0';j++){
                   
                }               
            }            
        }
    }
}