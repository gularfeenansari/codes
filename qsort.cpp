#include <iostream>
using namespace std;

int partition(int a[],int l,int h)
{
    int i=l-1,j,temp,pivot=a[h];
    for(j=l;j<=h;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            
        }
    }
     i++;
     temp = a[i];
     a[i] = a[h];
     a[h] = temp;
    return i;
}

void quicksort(int a[],int l,int h)
{
    int pivot;
    if(l<h)
    {
        pivot = partition(a,l,h);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,h);
    }
    
}

int main()
{
    int a[] = {5,4,1,8,7,2,4,9,1};
    int i,n = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    quicksort(a,0,n-1);

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
