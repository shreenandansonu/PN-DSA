#include <bits/stdc++.h>
using namespace std;
int main()
{

    char s[100];
    cin.getline(s, 100);
    int i = 0, j = 1;
    while (j < strlen(s) - 1)
    {
        if (s[i] != s[j])
        {
            i++;
            s[i] = s[j];
        }

        j++;
    }
    s[i+1]='\0';
    cout << s << endl;

    return 0;
}