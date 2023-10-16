#include<iostream>
using namespace std;
int main(){
    // for( int i =101; i<=200; i++){
    //     cout<<i<<endl;
    // }
     
   //   char name ;
   //   for( name= 'a'; name<='z'; name++){
   //      cout<<name<<endl;
   //   }
      //  for(int i= 1; i<=100; i=i+3){
      //    cout<<i<<endl;
      //  }
      // int n;
      // cin>>n;
      // for( int i =1; i<=10; i++){
      //    // if(i%(i-1)!=0){
      //    //    cout<<i;
      //    // }
      //    cout<<n<<"*"<<i<<"="<<i*n<<endl;
      // }
      // cout<<"Enter the no";
      // int n,power , no;
      // cin>>n;
      // cout<<"Enter the power";
      
      //     cin>>power;
      //     no=n;
      // for( int i= 1; i<power; i++){
      //    no=no*n;
      // }
      // cout<<no;
      int n;
      int fac;
      cin>>n;
      fac=1;
      for( int i=1; i<=n;i++){
         fac=fac*i;
      }
      cout<<fac;



}