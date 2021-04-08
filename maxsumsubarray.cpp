//Largest Sum Contiguous Subarray


#include <iostream>
#include <algorithm>
using namespace std;
 

 /* kadanes algorithm is used
 
 Initialize:
    max_so_far = INT_MIN
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far
T(n) = O(n)

 
 */


int maxsub(int a[],int n)
{
   int max = INT_MIN,inmax = 0;
   

   for(int i=0;i<n;i++)
   {
       inmax+=a[i];
       if(max<inmax)
       {
           max = inmax;
       }

       if(inmax <0)
       {
           inmax = 0;
       }
   }
   return max;

}

int main()
{
    int a[]={-2,-3,-4,-8},n;

    n = sizeof(a)/sizeof(a[0]);

    cout<<maxsub(a,n);

    
    
   
    return 0;

}

/*

Other approach traditional T(n) = O(n^2)

*/