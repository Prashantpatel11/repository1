#include<iostream>
using namespace std ; 

int prime( int x){
    if(x<2){
        return 0;
    }

     for( int i = 2; i<x; i++){
        if(x%i==0){
            return 0;
        }
        else{
            return 1;
        }
     }
};

 void fact(int y){
    int ans=1;
    for( int i=1; i<=y; i++){
        ans = ans*i;
        cout<<ans;
    }

 };



int main(){
    int a , b;
    cout<<"Enter the values of no: ";
    cin>>a>>b;
      // calling of function
      cout<<prime(a);
      cout<<endl;
      cout<<prime(b)<<endl;
      fact(a);
     cout<<endl;
     fact(b);
     cout<<endl;
        cout<<prime(a-b);
        cout<<endl;
        fact(a-b);
      
}
