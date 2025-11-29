#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array (n)= ";
    cin>>n;
    int arr[n];
    
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
     //cout
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    

    
    return 0;
}