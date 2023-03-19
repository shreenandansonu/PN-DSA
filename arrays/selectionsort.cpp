#include <bits/stdc++.h>
using namespace std;

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
        for (int i = 0; i < n; i++)
        {
            int miniNum = INT_MAX, index;
            for (int j = i; j < n; j++)
            {
                if(miniNum>inputarr[j]){
                    miniNum=inputarr[j];
                    index = j;
                }
                
            }
            inputarr[index] = inputarr[i];
            inputarr[i] = miniNum;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<inputarr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}