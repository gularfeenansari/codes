#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"ENter n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}