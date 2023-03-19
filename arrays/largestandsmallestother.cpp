#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number of elments in the array"<<endl;
    int n,smallest,largest;
    cin>>n;
    int arr[n]={0};
    cout<<"Enter the elements to be checked "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest=arr[0];smallest=arr[0];
    for(int j=1;j<n;j++){
        smallest=min(smallest,arr[j]);
        largest=max(largest,arr[j]);
    }
    cout<<largest<<" is the largest number"<<endl;
    cout<<smallest<<" is the smallest number"<<endl;
    return 0;
}