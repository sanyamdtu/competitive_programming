#include <bits/stdc++.h>
using namespace std;

int func(int i,int arr[],int n,int output[][20]){
    if(i==n){
       output[0][0]=0;
       return 1;
    }
    int ch=arr[i],size1;
    size1=func(i+1,arr,n,output);
    for(int i=size1;i<2*size1;i++){
        output[i+size1][0]=output[i][0]+1;
        output[i+size1][1]=ch;
        for(int j=1;j<=output[i][0];j++)
          {
             output[i+size1][j+1]=output[i][j];
             
          }
    }
    for(int i=0;i<2*size1;i++){
        for(int j=0;j<output[i][0];j++)
            cout<<output[i][j]<<" ";
        cout<<endl;
    }
    
    return 2*size1;
}

int subset(int input[], int n, int output[][20]) {
    // Write your code here
    return func(0,input,n,output);
}

int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
