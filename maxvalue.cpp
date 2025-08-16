#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,3,7,86,53,21,56,4,25};
    int n= sizeof(arr)/sizeof(arr[0]);
    int mx= INT_MIN;
    for(int i=1;i<n;i++){
        if(mx<arr[i]) mx=arr[i];
    }
  cout<<mx;
}
          
    
