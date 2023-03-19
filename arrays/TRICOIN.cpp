#include <bits/stdc++.h>
using namespace std;
void answer()
{
    int N;
    cin>>N;
    int sum=0,num=0;
    while (sum<=N){
        num++;
        sum=(num*(num+1))/2;
        if()
        cout<<num<<" "<<sum<<" loop "<<endl;
    }
    cout<<num<<endl;
}
int main()
{
int t;
cin >> t;
for (int i = 0; i < t; i++)
{
answer();
}
return 0;
}