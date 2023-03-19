#include <iostream>
#include <climits>
using namespace std;
int main(){
    cout<<"Enter the numbers of elements in the array "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements to be checked "<<endl;
    for(int j=0;j<n;j++){
        cin>>arr[j];
        
    }
    int largest=INT_MIN, smallest=INT_MAX;
    for(int i=0;i<n;i++){
        largest=max(largest,arr[i]);
        smallest=min(smallest,arr[i]);
    }
    cout<<"largest number is "<<largest<<endl;
    cout<<"smallest number is "<<smallest<<endl;

    return 0;
}