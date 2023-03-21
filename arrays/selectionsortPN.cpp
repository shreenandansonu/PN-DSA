#include <bits/stdc++.h>
using namespace std;
void selection_sort(int n,int X[]){
    for (int i = 0; i < n-1; i++)
    {
        int min_index=i;
        for (int j = i; j <n ; j++)
        {
            if(X[min_index]>X[j]){
                min_index=j;
            }
        }
        swap(X[i],X[min_index]);
        
    }
    
}
int main()
{
int t;
cin >> t;
while(t--)
{
    int n;
    cin>>n;
    int X[n];
    for(int i=0;i<n;i++){
        cin>>X[i];
    }
    selection_sort(n,X);
    for (int i = 0; i < n; i++)
    {
        cout<<X[i]<<" ";
    }
    cout<<endl;
    
}
return 0;
}