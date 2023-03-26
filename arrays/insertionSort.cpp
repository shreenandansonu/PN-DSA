#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int inputarr[],int n){
    for (int  i = 1; i < n; i++)
    {
        int num=inputarr[i];
        int j =i-1;
        for ( ;j >=0; j--)
        {
            if(inputarr[j]>num){
                inputarr[j+1]=inputarr[j];
            }
            else break;// when the arra value is smaller or equals to the num then we will break out of the loop and the as the
            //number is smaller or equals to num we need to add the value before that particular index so we use j+1
        }
        inputarr[j+1]=num;
        
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