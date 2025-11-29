#include <iostream>
using namespace std;
int main(){
    //number of elements
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int i;

    //declaration
    int arr[n];
    //intilization
    for(i=0;i<n;i++){
        cin>>arr[i];
       
    }
    
    //reverse
     i=0;
    int j=n-1;
    
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    
    //reverse cout
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}