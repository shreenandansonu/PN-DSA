#include <iostream>
using namespace std;
int main(){
     int n,key;
     cout<<"Enter the number of elements  and the key value "<<endl;
     cin>>n>>key;
     int arr[1000];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int j=0;
     for (;j<n;j++){
        if(arr[j]==key){
            cout<<"YES the key is present in the array at the index "<<j<<endl;
            break;
        }
        else{
            if (j==n-1){
                cout<<-1<<endl;
            }
        }
     }     
    
    
    return 0;
}