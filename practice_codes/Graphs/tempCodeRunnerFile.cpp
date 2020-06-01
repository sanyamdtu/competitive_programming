
    int newv=q.front();
    q.pop();
    print(e,n,edges,visited,newv,q);
}
int main() {
    int V, E;
    cin >> V >> E;
    int edges[10][10];
    memset(edges,0,sizeof(edges));
    int visited[V];
    memset(visited,0,sizeof(visited));
    forn(i,E){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    queue<int> q;
    forn(i,V){
        if(visited[i]!=1)
         print(E,V,edges,visited,i,q);
    }
  return 0;
}
