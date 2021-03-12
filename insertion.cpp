#include <iostream>
using namespace std;
void insertionsort(int *a,int n)
{
    int i,j,key,comp=0,shift=0;
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i-1;comp++ && j>=0 && a[j]>key;j--)
        {
            shift++;            
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    cout<<"Shifts - "<<shift<<"\n";
    cout<<"comp - "<<comp<<"\n";
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertionsort(a,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" - ";
    }
    return 0;
}