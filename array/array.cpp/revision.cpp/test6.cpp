#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n= ";
    cin>>n;
    int i;

    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"target= ";
    cin>>target;

    for( i=0;i<n;i++){
        if(arr[i]==target){
            cout<<"value= "<<arr[i]<<"index= "<<i;
            break;
        }
    }
    if(i==n){
        cout<<-1;
    }
    cout<<endl;

    return 0;
}