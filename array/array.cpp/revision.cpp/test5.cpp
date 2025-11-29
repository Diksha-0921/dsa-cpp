#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n = ";
    cin>>n;
    int i;
    int j;
    int k;
    cout<<"enter the value of k= ";
    cin>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
//reverse all
i=0;
j=n-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

i=0;
j=k-1;

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;

    }

i=k;
j=n-1;

       while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;

    }



for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;


    return 0;
}