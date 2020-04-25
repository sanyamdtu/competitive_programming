#include <bits/stdc++.h>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	//Your Code goes here
    vector<int> result;
	map<int,int> has;/*
    for(int i=0;i<n;i++){
		if(has[arr[i]-1]){
			has[arr[i]-1]++;
		    if(has[arr[i]+1]){
				has.insert(pair<int,int>(arr[i],has[arr[i]-1]+has[arr[i]+1]));
				has.erase(arr[i]+1);	
		    }		
		}
		else if(has[arr[i]+1]){
			//has[arr[i]]+=has[arr[i]+1];
			has.insert(pair<int,int>(arr[i],has[arr[i]+1]+1));
			has.erase(arr[i]+1);
		}
		else{
			//has[arr[i]]++;
			has.insert(pair<int,int>(arr[i],1));
		}
	}
	int start=0;
	int maxi=INT_MIN;
	for(auto i:has){
		//
		if(maxi<i.second){
			maxi=max(maxi,i.second);
			start=i.first;
		}
	}
	for(int i=start;i<=maxi;i++){
		result.push_back(i);
	}/*
	for(int i=0;i<n;i++){
		if(has[arr[i]-1]!=has[arr[i]-1]){
			has[arr[i]]
		}
	}*/

	for(int i=0;i<n;i++){
		if(has[arr[i]-1]){
			has.insert(pair<int,int>(arr[i],has[arr[i]-1]));
			has[has[arr[i]-1]]++;//for updating the previous value
			cout<<arr[i]<<" "<<has[arr[i]-1]<<endl;
			if(has[arr[i]-1]!=arr[i]-1+1)
			 has.erase(arr[i]-1);   //take the case if both are same
			if(has[arr[i]+1]){
				has[has[arr[i+1]]]=has[arr[i]];
				has[has[arr[i]]]=has[arr[i]+1];
				has.erase(arr[i]);	
				has.erase(arr[i]+1);//the original value of arr[i] is erased
			}
		
		}
		else if(has[arr[i]+1]){
			has[has[arr[i]]+1]--;
			has.insert(pair<int,int>(arr[i],has[has[arr[i]+1]]));
			cout<<arr[i]<<" "<<has[arr[i]+1]<<endl;
			if(has[arr[i]+1]!=arr[i]+1)
			 has.erase(arr[i]+1);    
		}
		else{
			has.insert(pair<int,int>(arr[i],arr[i]));
			cout<<arr[i]<<" "<<has[arr[i]]<<endl;
		}
	}
	int start=0;
	int maxi=INT_MIN;
	for(auto i:has){
		if(i.first<i.second)
		if(maxi<i.second){
			maxi=max(maxi,i.second);
			start=i.first;
		}
	}
    cout<<"start "<<start<<" maxi"<<maxi;
	for(int i=start;i<=maxi;i++){
		result.push_back(i);
	}
	return result;	
}