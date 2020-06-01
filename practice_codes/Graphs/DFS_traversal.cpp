#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
void print(int n,int e,int visited[10],int edges[][10],int start_vertex){
    cout<<start_vertex<<" ";
    visited[start_vertex]=1;
    forn(i,n){
        if(visited[i]!=1 && edges[start_vertex][i]==1){
            print(n,e,visited,edges,i);
        }
    }
}
int main(){
    int n,e;//vertices that are given
    cin>>n>>e;
    int edges[10][10];
    memset(edges,0,sizeof(edges));
    forn(i,e){ 
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    int visited[10];
    memset(visited,0,sizeof(visited));
    print(n,e,visited,edges,1);
}