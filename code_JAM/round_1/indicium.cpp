#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)

void func(int n,string str,int sum,int data,int latin_number,vector<string> &poss){
    if(sum>n)
     return ;
    if(sum==n){
        if(str.length()==latin_number)
        poss.push_back(str);
     return ;
    }
    if(data>latin_number)
     return ;
    func(n,str,sum,data+1,latin_number,poss);
    str.push_back('0'+data);
    func(n,str,sum+data,data,latin_number,poss);
}
void printLatin(int n,int arr[][5]) 
{ 
    int k = n+1;  
    for (int i=1; i<=n; i++) 
    {
        int p=0; 
        int temp = k; 
        while (temp <= n) 
        { 
            arr[i-1][p]=temp;
            p++; 
            temp++; 
        } 
        for (int j=1; j<k; j++){
            arr[i-1][p]=j;
            p++;
        } 
        k--; 
    } 
} 
int main(){
    int t;
    cin>>t;
    forn(l,t){
        vector<string> poss;
        int n,k;
        cin>>n>>k;
        func(k,"\0",0,1,n,poss);
        int arr[5][5],answer_matrix[5][5];//original latin array
        //original answer array
        int supplement_array[5];//array to fill the answer matrix
        printLatin(n,arr);
        int ans=0;
        forn(i,poss.size()){
            cout<<poss[i]<<endl;
        }
        forn(i,poss.size()){
            int supplement_array_count=0;
            int flag=1;
            int visited[n];
            memset(visited,0,sizeof(visited));
            forn(j,n){
                //j is the count
                forn(k,n){
                    if(arr[k][j]==poss[i][j]-'0'){
                        if(visited[k]==1){
                            flag=0;  //if wrongly visited again
                            break;
                        }
                        else{
                            visited[k]=1;
                            supplement_array[supplement_array_count]=k;
                            supplement_array_count++;
                        }
                        // i have visited it
                    }
                }
                if(flag==0)
                 break;
            }
            if(flag==1){
                ans=1;
                break;
            }
        }
        if(ans==0){
            cout<<"Case #"<<l+1<<": "<<"IMPOSSIBLE"<<endl;
        }
        else{
            forn(i,n){
                int fill_row=supplement_array[i];
                forn(j,n){
                    answer_matrix[i][j]=arr[fill_row][j];
                }
            }
            cout<<"Case #"<<l+1<<": "<<"POSSIBLE"<<endl;
            forn(i,n){
              forn(j,n)
               cout<<answer_matrix[j][i]<<" ";
             cout<<endl;                 
             }
        }
    }
    return 0;
}
