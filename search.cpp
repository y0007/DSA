#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,3,7,86,53,21,56,4,25};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter Target";
    cin>>x;
    bool flag = false;

    for(int i=0;i<=n;i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<x<<" is present";
    else cout<<x<<" is not present";
}
          
    
