#include<bits/stdc++.h>
using namespace std;
void merge(int input[],int s,int m,int e){
    int temp[e-s+1],c=0,mid_temp=m+1,start=s;
    while(s<=m && e>=mid_temp){
        if(input[s]>input[mid_temp]){
            temp[c]=input[mid_temp];
            mid_temp++;
            c++;
        }
        else{
            temp[c]=input[s];
            s++;
            c++;
        }
    }
    if(s<=m){
        while(s<=m){
            temp[c]=input[s];
            s++;
            c++;
        }
    }
    else{
        while(e>=mid_temp){
            temp[c]=input[mid_temp];
            mid_temp++;
            c++;
        }
    }
    for(int i=0;i<e-start+1;i++){
        input[start+i]=temp[i];
    }   
}
void mergest(int input[],int size,int start,int end){
    if(start>=end)
        return ;
    int mid=(start+end)/2;
    mergest(input,size,start,mid);
    mergest(input,size,mid+1,end);
    merge(input,start,mid,end);   
}
void mergeSort(int input[], int size){
    mergest(input,size,0,size-1);     
}

int main(){
    int n=6;
    int arr[]={2, 6, 8, 5, 4, 3};
    mergeSort(arr,n);
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     cout<<endl;
    return 0;
}