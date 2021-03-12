#include <iostream>
using namespace std;
int main()
{
    int tc,n,key,i,j,c,found;
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
        for(j=0;j<n && found!=1;j++)
        {
            c++;
            if(arr[j]==key) 
            {
                cout << "Found " << c<< endl;
                found = 1;
            }           
        }
        if(found==0)
        {
            cout << "Not found " << c << endl;
        }


    }
    return 0;
}                                                                            