#include<iostream>
using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // for (int i =1; i<=n; i++){
    //     cout<<i*i<<endl;
    // }
    for ( int i=1; i<=n; i=i+2){
        cout<<i<<endl;
    }
 }