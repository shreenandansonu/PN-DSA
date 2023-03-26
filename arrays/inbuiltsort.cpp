#include <bits/stdc++.h>
using namespace std;
//This function is passed as a parameter to the function sort which sets the oder of the sorting ie. ascending or descending .
bool comp(int a, int b){
    return a>b;
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
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a,a+n,comp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
return 0;
}