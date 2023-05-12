#include <bits/stdc++.h>
using namespace std;
// This is the function to check if there exist any pair whose sum is equal to given sum.
// We use two pointer approach and the array should be sorted
// we traverse the array from both the side and check if the sum is greater or equal or less than the sum
// if greater the we need to decrease the value so its done by decresing the left hand side index
// if smaller then we need to increase the value so its done by increasing the right han side index
// if equal then we need to screen print the  individual numbers
// as we can traverse the array from both side in one direction only we shoul not change the flow direction
int ispair(int n,int a[],int sum){
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]==sum){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;j--;// we need to increase or decrease the value of i and j or the loop won't stop
        }
        else if(a[i]+a[j]>sum) j--;
        else i++;
    }
    return -1;
}
int main()
{
int t;
cin >> t;
while(t--)
{
 int n;
 cin>>n;
 int a[n];
 for (int i = 0; i < n; i++)
 {
    cin>>a[i];
    
 }
 int sum;
 cin>>sum;
 sort(a,a+n);
 ispair(n,a,sum);
    
}
return 0;
}