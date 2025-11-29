#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array (n)= ";
    cin>>n;
    int arr[n];
    int k;
    cout<<"k= ";
    cin>>k;
        //cin
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
     //2 pointer approach
    int i=0;
    int j=n-1;

    // reverse 
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    //reverse first k
     i=0;
     j= k-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    //reverse rest 
    i=k;
    j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

     //cout
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    

    
    return 0;
}