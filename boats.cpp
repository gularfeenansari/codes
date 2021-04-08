#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[]={2,1},limit,n,nboats=0;

    cin>>limit;
    n = sizeof(a)/sizeof(a[0]);
    
    int i=0,j=n-1;
    while(i<=j)
    {
        if(a[i]+a[j]<=limit)
        {
            nboats++;
            i++;
            j--;
        }
        else
        {
            nboats++;
            j--;
        }
    }
    cout<<"Boats required - "<<nboats;
    return 0;

}