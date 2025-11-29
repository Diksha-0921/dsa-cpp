#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=3;
    int j=6;
        
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}