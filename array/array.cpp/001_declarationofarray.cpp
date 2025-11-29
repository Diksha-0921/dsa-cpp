#include<iostream>
using namespace std;
int main(){
    //declaration
    int arr[10];
    //size of array
    cout<<"size of array= "<<sizeof(arr)<<endl;
    //number of elements n
    cout<<sizeof(arr)/sizeof(int)<<endl;
    //output of array=garbage value
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    return 0;
}
