#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int inputarr[],int n){
        for (int i = 1; i < n; i++)
        {
            int Num = inputarr[i];
            int j=i-1;
            while (j>=0 & Num<inputarr[j])
            {
                inputarr[j+1]=inputarr[j];
                j--;// here the index is reduced by one and this value gets out of the loop 
                   //and is executed in the exterior of the loop 
            }
            inputarr[j+1]=Num;
            
        }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int inputarr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> inputarr[i];
        }
        insertion_sort(inputarr,n);
        for (int i = 0; i < n; i++)
        {
            cout<<inputarr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}