#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {2,4,8,9,1,4,7,95,2,1,78,9,2,8,9,4,7},i,n;
    n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    if(n%2==0)
    {
        cout<<"Median is - "<<(a[n/2]+a[n/2+1])/2;
    }
    else
    {
        cout<<"Median is - "<<a[n/2];
    }
    return 0;

}