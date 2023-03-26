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
   int a[n],cs[n+1]={0},csum=0;
   //This loop is to take the input array
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
    csum+=a[i];
    cs[i+1]=csum;
   }
   int maxsum=INT_MIN,lhs=-1,rhs=-1;
   // this loop is to define the starting point
   for (int i = 0; i < n; i++)
   {
    // this loop is to define the end of the subarray starting from i index
    for (int j = i; j < n; j++)
    {   
        int sum=(cs[j+1]-cs[i]);
        if(maxsum<sum){
            maxsum=sum;
            lhs=i;rhs=j;
        }
        sum=0;
    }    
   }
   cout<<maxsum<<endl;
   //priting subarray
   
   for (int l = lhs; l <= rhs; l++)
   {
    cout<<a[l]<<" ";
   }
   cout<<endl;
      
}
return 0;
}