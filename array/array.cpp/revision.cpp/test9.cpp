#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n=";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int fl=INT_MIN;
    int sl=INT_MIN;
    int tl=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>fl){
            tl=sl;
            sl=fl;
            fl=arr[i];
        }
        else if(arr[i]>sl){
            tl=sl;
            sl=arr[i];
        }
        else if (arr[i]>tl){
            tl=arr[i];
    
        }
    }

    
        cout<<"fl="<<fl<<"sl="<<sl<<"tl=" <<tl<<" ";
    

    cout<<endl;



    return 0;
}