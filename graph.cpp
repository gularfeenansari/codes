/*#include <iostream>
#include <vector>
using namespace std;


void addedge(vector<int> V[],int u,int v)
{
    V[u].push_back(v);
    V[v].push_back(u);
}

void printGraph(vector<int> V[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        cout<<"For node -"<<i<<endl;
        for(int j=0;j<V[i].size();++j)
        {
            cout<<V[i][j]<<"->";
        }
        cout<<"\n";
    }
}
int main()
{
    int n,m,j,i,node;
    cout<<"Enter the no of nodes";
    cin>>n;
    vector<int> V[n];

    for(i=0;i<n;i++)
    {
        cout<<"Enter the no of adjacent nodes of - "<<i;
        cin>>m;
        for(j=0;j<m;j++)
        {
            cin>>node;
            addedge(V,i,node);
        }
    }

    
    
    printGraph(V,5);
    return 0;

}
*/


// A simple representation of graph using STL
#include<bits/stdc++.h>
using namespace std;
 
// A utility function to add an edge in an
// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 
// A utility function to print the adjacency list
// representation of graph
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
}
 
// Driver code
int main()
{
    int v = 5,i,j,e,anode;
    vector<int> adj[v];
    for(i=0;i<v;i++)
    {
        cout<<"Enter no of adjacent nodes of - "<<i<<"\n";
        cin>>e;
        for( j=0;j<e;j++)
        {
            cout<<"Enter node\n";
            cin>>anode;
            adj[i].push_back(anode);
            
        }
    }

    printGraph(adj,v);
    return 0;
}