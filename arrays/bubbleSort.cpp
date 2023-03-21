#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int inarr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i < n-j; i++)
        {
            if (inarr[i] < inarr[i - 1])
                swap(inarr[i], inarr[i - 1]);
        }
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
        int inarr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> inarr[i];
        }
        bubbleSort(inarr, n);
        for (int i = 0; i < n; i++)
        {
            cout << inarr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}