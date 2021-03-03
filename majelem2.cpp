#include <iostream>
#include <algorithm>
using namespace std;

struct 
{
    int e[100]={0},f[100]={0};
}var;

int main()
{
    int a[]={1,2,3,4,5,6,7,5},i,n,max=0;
    n = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        var.e[a[i]] = a[i];
        var.f[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(var.f[i]>n/2)
        {
            cout<<"Major element is - "<<var.e[i];
            return 0;
        }
    }
    cout<<"No majority element";
 return 0;
}