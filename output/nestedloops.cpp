#include<iostream>
using namespace std ; 
int main(){
//     for ( int i = 1; i<=5; i++){
//         for( int j=1; j<=5; j++){
//             cout<<"10"<<" ";
           
//         }
//         cout<<endl;
//     }

 int row, column;
 int count=1;
 

 for( row=1;row<=5;row++){
     
    for( column=1;column<=5;column++){
        cout<<count<<" ";
        count=count+1;

    }
    cout<<endl;
 }

 }