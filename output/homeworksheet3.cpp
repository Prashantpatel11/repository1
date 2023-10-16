#include<iostream>
using namespace std;
int main(){
    // Question no 1
    cout<<"Enter the value of temp : ";

    int temp  ;
    cin>>temp;
    
    if(temp>70 && temp<90){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    // Question no 2
    cout<<"Enter the value of no: ";
    int b;
    cin>>b;
    if(b>0 && b%2==0){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }
    cout<<endl;

    

    // Question no 3
    int x , y , z;
    cout<<"enter the values of above: ";
    cin>>x>>y>>z;
    if( x>y || x>z){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }

}