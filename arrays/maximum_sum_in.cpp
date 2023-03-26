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
   int maxsum=INT_MIN,lhs=-1,rhs=-1;
   // this loop is to define the starting point
   for (int i = 0; i < n; i++)
   {
    // this loop is to define the end of the subarray starting from i index
    for (int j = i; j < n; j++)
    {   
        int sum=0;
        // This loop is to print the numbers from the starting and end point
        for (int k = i; k <= j; k++)
        {
            sum+=a[k];
        }
        if(maxsum<sum){
            maxsum=sum;
            lhs=i;rhs=j;
        }
        sum=0;
        
    }
    
   }
   cout<<maxsum<<endl;
   for (int l = lhs; l <= rhs; l++)
   {
    cout<<a[l]<<" ";
   }
   cout<<endl;
      
}
return 0;
}