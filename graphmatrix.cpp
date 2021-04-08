#include <iostream>
#include <algorithm>
using namespace std;


/*

Implemnting a graph with the help of a matrix;

*/


int main()
{
    int v,e,anode;
    cout<<"Enter no of nodes";
    cin>>v;
    int graph[v][v];
     for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            graph[i][j]=0;
        }
                
    }


   for(int i=0;i<v;i++)
   {
       cout<<"Enter no of adjacent node of  - "<<i;
       cin>>e;
       for(int j=0;j<e;j++)
       {
           cout<<"Enter node";
           cin>>anode;
           graph[i][anode]=1;
       }
   }

    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<graph[i][j]<<"  ";
        }
        cout<<"\n";
        
    }
    
   
    return 0;

}