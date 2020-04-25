#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
void printPascal(int n,ll arr[][100]) 
{  
      
    for (int line = 0; line < n; line++) 
    { 
        for (int i = 0; i <= line; i++) 
        { 
        if (line == i || i == 0) 
            arr[line][i] = 1; 
        else
            arr[line][i] = arr[line - 1][i - 1] +  
                           arr[line - 1][i];  
        } 
        forn()
    } 
} 
int main(){
   ll arr[100][100];
    printPascal(100,arr);
    int t;
    cin>>t;
    forn(l,t){
        int n;
        cin>>n;
         cout<<"Case #"<<l+1<<": "<<endl;
         cout<<1<<" "<<1<<endl;
        if(n==501){
            cout<<2<<" "<<2<<endl;
            cout<<3<<" "<<2<<endl;
            cout<<4<<" "<<2<<endl;
            cout<<4<<" "<<1<<endl;
            for(int i=1;i<=493;i++){
                cout<<i+4<<" "<<1<<endl;
            }

        } 
        else if(n<501)                       
        for(int i=2;i<=n;i++){
                cout<<i<<" "<<1<<endl;
            }
        else{
            
        }
    }
    return 0;
}