#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n = ";
    cin>>n;
    int i;
    bool flag=false;

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
    for(i=0; i<n; i++){
        if(arr[i]==target){
            cout<<i;
            flag=true;    
        }    
    }
    if(flag==false){
        cout<<-1;
    }
     cout<<endl;
    return 0;
}