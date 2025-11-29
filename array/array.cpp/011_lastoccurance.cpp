#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n = ";
    cin>>n;
    int i;

    //cin
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //target
    int target;
    cout<<"target= ";
    cin>>target;

    //search
    for(i=n-1; i>=0; i--){
        if(arr[i]==target){
            cout<<i;
            break;
        }    
    }
    if(i<0){
        cout<<"-1";
    }
    cout<<endl;
    return 0;
}