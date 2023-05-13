#include <bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    cout<<(a>b)<<endl;
    return a>b;
}
int main()
{
int t;
cin >> t;
while(t--)
{
 int arr[10]={10,52,56,95,1,02,35,101,8,108}   ;
 sort(arr,arr+10,comp);
 for(auto i:arr) cout<<i<<" ";
}
cout<<endl;
return 0;
}