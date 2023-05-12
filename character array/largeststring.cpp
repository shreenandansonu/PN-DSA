#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
while(t--)
{
 char s[100], p[100];
 int n,S=0,P=0;
 cin>>n;
 cin.get();

 for (int i = 0; i < n; i++)
 {
    cin.getline(s,100);
    S=strlen(s);
    if(S>P){
        P=S;
        strcpy(p,s);
    }
 }
 cout<<"string is "<<p<<" its length is "<<P<<endl;
    
}
return 0;
}