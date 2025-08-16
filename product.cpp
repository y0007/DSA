#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
     cin>>arr[i];
    }
    int product=1;
    
     for(int i=0;i<=4;i++){
     product*=arr[i];
    }
    cout<<product;
}