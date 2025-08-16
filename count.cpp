#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,3,7,86,53,21,56,4,25};
    int n= sizeof(arr)/sizeof(arr[0]);
    int x,count=0;
    cout<<"Enter number";
    cin>>x;
   

    for(int i=0;i< n;i++){
        if(arr[i]>x){
             count++;
           
        }
    }
    cout << "Number of elements greater than " << x << " is: " << count << endl;
    
    return 0;
}

  
          
    
