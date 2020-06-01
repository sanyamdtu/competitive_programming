#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
		int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
     int curr_sum=0,max_sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]+curr_sum<0){
            curr_sum=0;
        }
        else
           curr_sum+=arr[i];
        max_sum=max(max_sum,curr_sum);
    }
    max_sum=max(max_sum,curr_sum);
    cout<<max_sum<<endl;
	}
}