#include<iostream>
using namespace std;
int main(){
    int last , pre, curr,n;
    last=0;
    pre=1;
    cout<<"Enter the no : ";
    cin>>n;

    for(int i=3; i<=n; i++){
        curr=pre+last;
        last=pre;
        pre=curr;
        
    }
    cout<<"The fibonachi no is : ";
    cout<<curr;


}