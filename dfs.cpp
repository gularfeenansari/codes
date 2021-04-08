#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
    
}
 

int main()
{
    int v,edges,nodes,i,j,x,y,startnode;
    cout<<"Enter no of nodes";
    cin>>nodes;
    bool visited[nodes]={0};
    cout<<"Enter no of edges";
    cin>>edges;
    
    vector<int> adj[nodes];
    stack <int> st;
    

        
        cout<<"Enter edges\n";
        for( i=0;i<edges;i++)
        {
            
            cin>>x;
            cin>>y;
            addEdge(adj,x,y);
        }

        cout<<"Enter start node";
        cin>>startnode;
        st.push(startnode);
        

        

        while(!st.empty())
        {
            int popped = st.top();
            st.pop();
            if(!visited[popped])
            {
                cout<<popped;
            }
            visited[popped] = true;
            
            for(int i = 0 ; i< adj[popped].size();i++)
            {
                if(!visited[adj[popped][i]])
                {
                    st.push(adj[popped][i]);
                    
                }
            }
            
        }   
        
    
return 0;
}