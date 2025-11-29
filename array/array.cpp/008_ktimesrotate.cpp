#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n = ";
    cin>>n;
    int arr[n];

     //cin
     for(int i=0;i<n;i++){
        cin>>arr[i];   
     }

     //rotate
     for(int k=0;k<3;k++){
     int temp=arr[n-1];
     for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
     }
     arr[0]=temp;
    }
     //cout
     
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";        
     }

    cout<<endl;
    return 0;
}



//k*n times



                                       //another way


/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n = ";
    cin>>n;
    int arr[n];
    int k;
    
     //cin
     for(int i=0;i<n;i++){
        cin>>arr[i];   
     }
     //rotate
     while(k--){
     int temp=arr[n-1];
     for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
     }
     arr[0]=temp;
    }
     //cout
     
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";        
     }

    cout<<endl;
    return 0;
}

*/