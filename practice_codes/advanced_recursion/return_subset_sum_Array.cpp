/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/
#include<bits/stdc++.h>
using namespace std;
int size_o=0;
void func(int i,int arr[],int n,int output[][50],int k,int ans[],int size=0){
    //cout<<i<<" ";
    if(k<0){
        return ;
    }
    else if(k==0){
        output[::size_o][0]=size;
        for(int i=0;i<size;i++){
            output[::size_o][i+1]=ans[i];
        }
        ::size_o++;
       /// cout<<"ok";
        return ;
    }
    else if(i<n){
        func(i+1,arr,n,output,k,ans,size);
        ans[size]=arr[i];
        func(i+1,arr,n,output,k-arr[i],ans,size+1);
    }
    return ;
}
int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
    int ans[50];
    func(0,input,n,output,k,ans);
    return ::size_o+1;
}

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}


/*
6
17 18 6 11 2 4
6
*/