#include<iostream>
using namespace std;
 int main(){

    int n, prime;
    cout<<"Enter the no";
    cin>>n;
    prime=n;
    for( int i =2; i<=n; i++){
              if(prime%i==0){
                cout<<"not a prime no";
                return 0;
              }
              
    
    }
    cout<<"it is a prime no";
    
    
 }