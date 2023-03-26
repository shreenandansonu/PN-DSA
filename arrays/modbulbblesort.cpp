#include <bits/stdc++.h>
using namespace std;
// declairing the compare function
bool compare (int a,int b){
    return a>b;
}
// declairing the bubble sort  function
void bubbleSort(int inarr[], int n, bool (&cmp)(int a, int b))
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i < n-j; i++)
        {
            if (cmp(inarr[i] , inarr[i - 1]))
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
        bubbleSort(inarr, n,compare);
        for (int i = 0; i < n; i++)
        {
            cout << inarr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}