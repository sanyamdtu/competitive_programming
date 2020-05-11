
/*
Code : Kruskal's Algorithm
Send Feedback
Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
Find and print the Minimum Spanning Tree (MST) using Kruskal's algorithm.
For printing MST follow the steps -
1. In one line, print an edge which is part of MST in the format -
v1 v2 w
where, v1 and v2 are the vertices of the edge which is included in MST and whose weight is w. And v1 <= v2 i.e. print the smaller vertex first while printing an edge.
2. Print V-1 edges in above format in different lines.
Note : Order of different edges doesn't matter.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next E lines : Three integers ei, ej and wi, denoting that there exists an edge between vertex ei and vertex ej with weight wi (separated by space)
Output Format :
MST
Constraints :
2 <= V, E <= 10^5
Sample Input 1 :
4 4
0 1 3
0 3 5
1 2 1
2 3 8
Sample Output 1 :
1 2 1
0 1 3
0 3 5
*/

//union find algorithm is used

#include <bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
int n,e;
struct edges{
    int source;
    int destination;
    int weight;
  };
int *parent=new int [n-1];
bool comp(edges a,edges b){
  return (a.weight<b.weight);
}
int findparent(int a){
  if(a==parent[a])
   return a;
  findparent(parent[a]);
}
int main()
{
  cin >> n >> e;
  // int **edges= new int *[n];
  // forn(i,n){
  //   edges[i]=new int [n];
  //   forn(j,n){
  //     edges[i][j]=0;
  //   }
  // }
  edges *input=new edges [e];
  edges *output=new edges[n-1];
  forn(i,n)
   parent[i]=i;///initialsing it with its own parent
   forn(i,e){
     cin>>input[i].source;
     cin>>input[i].destination;
     cin>>input[i].weight;
   }
  sort(input,input+e,comp);
  int count=0;
  forn(i,n){
    if(findparent(input[i].source)==findparent(input[i].destination)){
      continue;
    }
    else{
      parent[findparent(input[i].source)]=findparent(input[i].destination);
      output[count]=input[i];
      count++;
    }
  }
 forn(i,n-1){
     if(output[i].source<output[i].destination){
         cout<<output[i].source<<" "<<output[i].destination<<" ";
     }
      else{
          cout<<output[i].destination<<" "<<output[i].source<<" ";
      }
     cout<<output[i].weight;
     cout<<endl;
   }
  return 0;
}


