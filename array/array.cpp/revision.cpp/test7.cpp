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

    for(int i=n-1;i>=0;i--){
        if(arr[i]==target){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1;
    cout<<endl;
    return 0;
}