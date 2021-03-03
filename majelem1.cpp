#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[]={1,5,5,5,5,5,5,5},i,n,c=0;
    n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
            
       }
       if(c>n/2)
       {
           cout<<"MAjority element is - "<<a[i];
           return 0;
       }
       if(a[i]!=a[i+1])
       {
           c=0;
       }
    }
    cout<<"No majority element";
 return 0;
}