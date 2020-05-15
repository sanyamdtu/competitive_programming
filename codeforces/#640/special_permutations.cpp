#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
void dfs(vector<int> &v,int i,int *visited,int **edge,int n){
    if(!visited[i]){
        v.push_back(i);
        visited[i]=1;
        for(int j=n-1;j>=0;j--){
            if(edge[i][j]==1&& visited[j]!=1){
                dfs(v,j,visited,edge,n);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int **edge=new int *[n];
    forn(i,n)
        edge[i]=new int [n];
    forn(i,n)
    forn(j,n)
    edge[i][j]=0;
    for(int i=0;i<n;i++){
        if(i+2<n){
            edge[i][i+2]=1;
            edge[i+2][i]=1;
            if(i+3<n){
                edge[i][i+3]=1;
                edge[i+3][i]=1;
                if(i+4<n){
                    edge[i][i+4]=1;
                    edge[i+4][i]=1;
                }
            }   
        }        
    }
    
    int *visited=new int [n];
    forn(i,n)
     visited[i]=0;
    vector<int> ans;
    dfs(ans,0,visited,edge,n);
    
    if(ans.size()==n){
        cout<<ans[n-1]+1<<" ";
        forn(i,ans.size()-1)
        cout<<ans[i]+1<<" ";
        cout<<endl;
    }
    else
     cout<<-1<<endl;
    }
}
//1 2 3 4 5 6 7 8 9 10
//1 3 2 5 4 7 6 9 8 10
//1 3 5 2 7 4 9 6 10 8
//1 3 5 7 2 9 4 10 6 8
//1 3 5 7 9 2 10 4 8 6
//1 3 5 7 9 2 4 10 6 8
//1 5 9 
