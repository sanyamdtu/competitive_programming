    #include<bits/stdc++.h>
    using namespace std;
    #define forn(i,n) for(int i=0;i<n;i++)
    #define pb(x) push_back(x)
    typedef long long ll;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int n,kuma,suma=0;
            cin>>n>>kuma;
            int arr[n],brr[n];
            forn(i,n)
            cin>>arr[i];
            forn(i,n)
            cin>>brr[i];
            sort(arr,arr+n);
            sort(brr,brr+n);
            for(int i=0,j=n-1;j>=0 &&kuma >=1;){
                if(arr[i]<brr[j]){
                    swap(arr[i],brr[j]);
                    i++;
                    j--;
                    kuma--;
                }
                else
                break;
            }
            forn(i,n){
                suma+=arr[i];
            }
            cout<<suma<<endl;
        }
    }