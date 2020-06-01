#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
    sort(arr,arr+n);
    
	int maxi=1,curr=0,curr_idx=0,flag=1,maxi_idx=0;//0 means sequence start
	for(int i=1;i<n;i++){
		if(arr[i]-1==arr[i-1]){
			curr++;
		}
        else{
            flag=0;
        }
		if(maxi<curr && flag==0){
			maxi=curr;
			maxi_idx=curr_idx;
			curr=1;
			curr_idx=i+1;
			flag=1;
		}
	}
	if(maxi<curr){
		maxi=curr;
		maxi_idx=curr_idx;
	}
    vector<int> v;
	for(int i=maxi_idx;i<=maxi_idx+maxi;i++)
	 v.push_back(i);
    return v;
}