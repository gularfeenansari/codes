#include <iostream>
using namespace std;
int main()
{
    int a[]={1,7,2,3,5,48,42};
    int n = sizeof(a)/sizeof(a[0]);
    int i,j,c=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                cout<<"Inversion"<<a[i]<<"  "<<a[j]<<"\n";
                c++;
            }
        }
    }
    if(c==0)
    {
        cout<<"No Inversion";
    }
    return 0;
}