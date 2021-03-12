#include <iostream>
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