#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
void print(int e,int n,int **edges,int *visited,int sv,queue<int> q){
    cout<<sv<<" ";
    forn(i,n){
        if(edges[sv][i]==1 && visited[i]!=1 && i!=sv){
           q.push(i);
           visited[i]=1;
        }
    }
    if(q.empty()){
        return ;
    }
    int newv=q.front();
    q.pop();
    print(e,n,edges,visited,newv,q);
}
int main() {
    int V, E;
    cin >> V >> E;
    int **edges=new int *[V] ;
    forn(i,V){
        edges[i]=new int[V];
        forn(j,V)
        edges[i][j]=0;
    }
    int *visited=new int [V];
    forn(i,V)
     visited[i]=0;
    forn(i,E){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    queue<int> q;
    forn(i,V){
        if(visited[i]!=1){
            visited[i]=1;
            print(E,V,edges,visited,i,q);
        }
    }
    forn(i,V){
        delete [] edges[i]; 
    }
    delete[] edges;
  return 0;
}


/*
4 4
0 1
0 3
1 2
2 3

*/