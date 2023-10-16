#include<iostream>

using namespace std;
void swap(int &x, int &y){
    int c;
    c=x;
    x=y;
    y=c;

}
int main(){
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";
}