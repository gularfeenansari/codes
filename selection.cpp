#include <iostream>
using namespace std;

int main()
{
    int i,j,n,min_i,swaps=0,comp=0;
    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;++comp && i<n;i++)
    {
        min_i = i;
        for(j=i+1;++comp && j<n;j++)
        {
            if(++comp && a[j]<a[min_i])
            {
                min_i = j;
            }
        }
        if(++comp && i!=min_i)
        {
             int temp = a[i];
             a[i] = a[min_i];
             a[min_i] = temp;
             swaps++;
        }
       
    }
      for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Swaps : "<<swaps;
    cout<<"\n comp : "<<comp;
}