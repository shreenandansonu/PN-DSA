#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(char s[])
{
    int i = 0, j = strlen(s) - 1;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    char s[1000];
    cin.get();
    for (int i = 0; i < t; i++)
    {
        
        cin.getline(s, 1000);
        if (is_palindrome(s))
            cout << "IS PALINDROME" << endl;
        else
            cout << "NOT PALINDROME" << endl;
    }

    return 0;
}