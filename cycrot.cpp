#include <iostream>
#include <algorithm>
using namespace std;


void cycrot(int a[],int n)
{
    int temp=a[n-1],i;
   for(i=n-1;i>0;i--)
    {
        a[i] = a[i-1];
    }
    a[i]=temp;
}

int main()
{
    int a[]={2,3,4,8,7,-4,-7,-2,4,-3,-7,-8,54,-30},n;

    n = sizeof(a)/sizeof(a[0]);

    cycrot(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    
   
    return 0;

}