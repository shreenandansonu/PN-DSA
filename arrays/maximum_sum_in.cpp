#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
   int n;
   cin>>n;
   int a[n];
   //This loop is to take the input array
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
   }
   int sum=0,maxsum=INT_MIN;
   // this loop is to define the starting point
   for (int i = 0; i < n; i++)
   {
    // this loop is to define the end of the subarray starting from i index
    for (int j = i; j < n; j++)
    {
        // This loop is to print the numbers from the starting and end point
        for (int k = i; k <= j; k++)
        {
            sum+=a[k];
        }
        maxsum=max(sum,maxsum);
        sum=0;
        
    }
    
   }
   cout<<maxsum<<endl;
   
    
}
return 0;
}