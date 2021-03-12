#include <iostream>
using namespace std;
int main()
{
    int tc,n,key,i,j,c,found,low,high,mid;
    cin >> tc;
    for(i=0;i<tc;i++)
    {
        
        int arr[30];
        cin >> n;
        
        for(j=0;j<n;j++)
        {
            cin >> arr[j];
        }

        cin>>key;
        c=0;
        found=0;
        low=0;high=n;
        while (found == 0 && low<=high)
        {
            c++;
            mid = (low+high)/2;
            if(arr[mid]==key)
            {
                cout << "found " << c << endl;
                found=1;
            }
            else
            {
                if(key>arr[mid])
                {
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        
        if(found==0)
        {
            cout << "Not found " << c << endl;
        }


    }
    return 0;
}                    