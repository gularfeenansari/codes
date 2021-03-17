#include <iostream>
using namespace std;

void merge(int a[],int l,int mid,int h)
{
    int n1 = mid-l+1,n2 = h-mid,i=0,j=0,k=0;
    int a1[n1],a2[n2];

    while(i<n1)
    {
        a1[i] = a[l+i];
        i++;
    }
    while(j<n2)
    {
        a2[j] = a[mid+1+j];
        j++;
    }
    i=0,j=0,k=l;
    
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            a[k++] = a1[i++];
        }
        else
        {
            a[k++] = a2[j++];
        }
    }
    while(i<n1)
    {
        a[k++] = a1[i++];
        
    }
     while(j<n2)
    {
        a[k++] = a2[j++];
        
    }
}

void mergesort(int a[],int l,int h)
{
    if(l<h)
    {
        int mid = l+((h-l)/2);
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);

    }
}
int main()
{
    int a[]={1,4,9,4,7,5,4,7,1,0,2};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Unsorted array";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    mergesort(a,0,n-1);

    cout<<"\n";

    cout<<"Sorted array";

    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    return 0;
}