#include <iostream>
#include <algorithm>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int a[],int n)
{
    int l=0,h=n-1,i=0;
    while(i<=h)
    {
        if(a[i] == 0)
        {
            swap(a[i],a[l]);
            l++;
            i++;

        }
        else if(a[i] == 1)
        {
            
            i++;
        }

        else
        {
            swap(a[i],a[h]);
            h--;
            
        }
    }
}

int main()
{
    int a[]={2,1,0,1,1,2,2,1,0,0,0,0,1,1,2,0},n;

    n = sizeof(a)/sizeof(a[0]);

    sort012(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    
   
    return 0;

}