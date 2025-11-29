#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n = ";
    cin>>n;

    //array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //largest
    int fl=INT_MIN;
    int sl=INT_MIN;
    int tl=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>fl){
            tl=sl;
            sl=fl;
            fl=arr[i];
        }
        else if (arr[i]>sl){
            tl=sl;
            sl=arr[i];
            
        }
        else if(arr[i]>tl){
            tl=arr[i];
        }    
    }
    
    cout<<"tl= "<<tl<<endl;
    cout<<"sl= "<<sl<<endl;
    cout<<"fl= "<<fl<<endl;
    return 0;
}