#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/*

Implementing a graph with the help of a vector;

*/

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    
}
 

int main()
{
    int v,e,anode,i,j;
    cout<<"Enter no of nodes";
    cin>>v;
    vector<int> adj[v];
    

    for(i=0;i<v;i++)
    {
        cout<<"Enter no of adjacent nodes of - "<<i<<"\n";
        cin>>e;
        for( j=0;j<e;j++)
        {
            cout<<"Enter node\n";
            cin>>anode;
            addEdge(adj,i,anode);
        }
    }
   
    

    for(i=0;i<v;i++)
    {
        cout<<"Node of - "<<i;
        for(j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j];
        }
        cout<<"\n";
        
    }   
   
    return 0;

}