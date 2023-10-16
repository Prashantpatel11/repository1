#include<iostream>
using namespace std;
int main()
{
    // conversion into binary from decimal
    int num;
    cout<<"Enter the no: ";
    cin>>num;
    int rem, ans=0, mul=1;;
    // while(num>0){
    //     rem=num%2;
    //     num /=2;
    //     ans+=rem*mul;
    //     mul*=10;
    // }

    // cout<<ans<<endl;
    // conversion into decimal from binary no
   
    while( num>0){
        rem=num%10;
        num=num/10;
        ans = mul*rem+ans;
        mul*=2;
    }
    cout<<ans;
    



}