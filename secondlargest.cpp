#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,3,7,86,53,21,56,4,25};
    int n= sizeof(arr)/sizeof(arr[0]);
    int mx= INT_MIN;
    int smx= INT_MIN;
    for(int i=1;i<n;i++){
        if(mx<arr[i]) mx=arr[i];
    }
     for(int i=1;i<n;i++){
        if(smx<arr[i] && arr[i]!=mx) smx=arr[i];//arr[i]!=mx ham yeh islea use kr rhe taaki second largest , largest  se comapre hee n ho
    }

  cout<<mx<<" "<<smx;
}
          
    
