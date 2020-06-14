/*
Code : BFS Traversal
Send Feedback
Given an undirected and disconnected graph G(V, E), print its BFS traversal.
Here you need to consider that you need to print BFS path starting from vertex 0 only.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Note : 1. Take graph input in the adjacency matrix.
2. Handle for Disconnected Graphs as well
Input Format :
Line 1: Two Integers V and E (separated by space)
Next 'E' lines, each have two space-separated integers, 'a' and 'b', denoting that there exists an edge between Vertex 'a' and Vertex 'b'.
Output Format :
BFS Traversal (separated by space)
Constraints :
2 <= V <= 1000
1 <= E <= 1000
Sample Input 1:
4 4
0 1
0 3
1 2
2 3
Sample Output 1:
0 1 3 2
*/
#include <bits/stdc++.h>
using namespace std;
void bfs(int **edges, int *visited, int v, queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        for (int i = 0; i < v; i++)
        {
            if (edges[q.front()][i] == 1 && i != q.front())
                if (visited[i] != 1)
                {
                    visited[i] = 1;
                    q.push(i);
                }
        }
        q.pop();
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    int **edges = new int *[v];
    for (int i = 0; i < v; i++)
        edges[i] = new int[v];
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            edges[i][j] = 0;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        edges[a][b] = 1;
        edges[b][a] = 1;
    }
    queue<int> q;
    int *visited = new int[v];
    for (int i = 0; i < v; i++)
        visited[i] = 0;
    q.push(0);
    visited[0] = 1;
    bfs(edges, visited, v, q);
}
