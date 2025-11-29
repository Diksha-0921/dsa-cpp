#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;
    int arr[n];
    //cin
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    //pointers for the range
     int i=3;
     int j=7;
    //reversing the arr
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    cout<<endl;
    // cout
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}