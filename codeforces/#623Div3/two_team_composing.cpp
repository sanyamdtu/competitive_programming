#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int *arr=new int[n];
        forn(i,n)
         cin>>arr[i];
        sort(arr,arr+n);
        int count_same=1,curr_arr=0,max_same=INT_MIN;
        forn(i,n){
                if(curr_arr==arr[i])
                 count_same++;
                else
                {
                    max_same=max(max_same,count_same);
                    count_same=1;
                    curr_arr=arr[i];
                }
                max_same=max(max_same,count_same);
        }
        int total_same=0;
        forn(i,n){
                if(curr_arr==arr[i])
                 total_same++;
                else
                {
                    curr_arr=arr[i];
                }
        }
        int distinct=n-total_same;
        if(distinct<max_same){
            cout<<distinct<<endl;
        }
        else if(distinct==max_same)
         cout<<distinct-1<<endl;
        else{
            cout<<max_same<<endl;
        }
    }
    return 0;    
}