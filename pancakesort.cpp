#include<bits/stdc++.h>
using namespace std;

void flip(int *a ,int mi,int n)
{
    int i,temp;
    for(i=mi;i<n;i++,n--)
    {
        temp = a[mi];
        a[mi] = a[n-1];
        a[n-1] = temp;
    }
}




int fmax(int *a,int n)
{
    int maxi=0,i;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[maxi])
        {
            maxi=i;
        }
    }
    return maxi;
}

void pancakesort(int *a,int n)
{
    int mi,i;
    for(i=n;i>1;i--)
    {
        mi = fmax(a,i);
        if(mi!=(i-1))
        {
            flip(a,mi,i);
        }
    }
}


int main()
{
    int i,a[30],n;
    cout<<"Enter value of n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pancakesort(a,n);

     for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}