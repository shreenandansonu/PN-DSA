#include<iostream>
using namespace std;
int main(){
    int n,start,end,mid;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    int  arr[n]={0};
    cout<<"Enter the "<<n<<" numbers in ascending or descending order"<<endl;
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    int key;
    cout<<"Enter the key you want to find"<<endl;
    cin>>key;
    start=0;
    end=n-1;
    while(start!=end){
        mid =(start+end)/2;
        if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if (arr[mid]==key){
            cout<<"key found at "<<mid<<" "<<endl;
            break;
        }
    }
    if(start==end){
        cout<<"key not found "<<-1<<endl;
    }

    return 0;
}