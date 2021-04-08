#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveneg(int a[],int n)
{
    int l=0;
   for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            swap(a[i],a[l]);
            l++;
        }
    }
}

int main()
{
    int a[]={2,3,4,8,7,-4,-7,-2,4,-3,-7,-8,54,-30},n;

    n = sizeof(a)/sizeof(a[0]);

    moveneg(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    
   
    return 0;

}