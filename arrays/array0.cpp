#include<iostream>
using namespace std;
int main(){
    
    /*int a[10]={1,2,3};
    //print all the elemeny
    for(int i=0;i<=9;i++){
        cout<<a[i]<<endl;
    }*/
    // taking nput from user
    int n;
    cin>>n;
    int b[n]={0};
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    for(int j=0;j<n;j++){
        cout<<b[j]<<" this is the "<<j+1<<" element"<<endl;
    }
    cout<<sizeof(b)<<endl;
    cout<<" no of elements in array "<< (sizeof(b)/sizeof(int));


    return 0;
}