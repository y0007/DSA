#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int brr[n];
       for(int i=0;i<n;i++){
        brr[i]= arr[n-i-1];
           cout<<brr[i]<<" ";
      
    }
    cout<<endl;

   
}
          
    
