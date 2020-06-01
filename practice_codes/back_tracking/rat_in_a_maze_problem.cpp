bool back_track(int arr[][20],int n,int i,int j){
    if(i==n-1&&j==n-1){
        arr[i][j]=-1;
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              if(arr[i][j]==-1)
               cout<<1<<" ";
              else
                cout<<0<<" ";
          }
        }
        cout<<endl;
        arr[i][j]=1;
        return false;
        
    }
    if(i==n||j==n||i<0||j<0)
     return false;
    if(arr[i][j]<=0)
     return false;
    arr[i][j]=-1;
    bool u,d,r,l;
    u=back_track(arr,n,i-1,j);
    d=back_track(arr,n,i+1,j);
    r=back_track(arr,n,i,j+1);
    l=back_track(arr,n,i,j-1);
    arr[i][j]=1;
    return false;
}
void ratInAMaze(int maze[][20], int n){
    int a=back_track(maze,n,0,0);
}
