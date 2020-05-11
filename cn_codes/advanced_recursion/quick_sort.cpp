#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int n,int s,int e){
    int count_min=0;
    for(int i=s;i<e-1;i++)
        if(arr[e]>arr[i])
         count_min++;
    int pos=s+count_min;
    swap(arr[pos],arr[e]);
    for(int i=s,j=e;i<pos;i++,j--){
        while(arr[i]<arr[pos])
         i++;
        while(arr[j]>arr[pos])
         j++;
        swap(arr[i],arr[j]);
    }
    return pos;
}
void quick(int arr[],int n,int s,int e){
    if(s>=e)
     return ;
    int pos=partition(arr,n,s,e);
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
    cout<<endl;
    quick(arr,n,s,pos-1);
    quick(arr,n,pos+1,e);
}
void quickSort(int input[], int size) {
    quick(input,size,0,size-1);
}

int main(){
    int n=6;
    int arr[]={6,5,4,3,2,1};
    quickSort(arr,n);
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     cout<<endl;
    return 0;
}