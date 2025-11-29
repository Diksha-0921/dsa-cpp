#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n= ";
    cin>>n;

    int target;
    cout<<"target = ";
    cin>>target;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    bool flag=true;

    for(int i=0; i<n;i++){
        if(arr[i]==target){
        cout<<i<<" ";
        flag=false;
        }
    }
    if(flag==true){
        cout<< -1;
    }
    cout<<endl;
    return 0;
}