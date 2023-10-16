#include<iostream>
using namespace std;
int main(){
  
  // Question no 1
  int row, col;
  for(row=1;row<=6;row++){
    for(col=1;col<=row;col++){
         cout<<col<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  // Question no 2
   
   
  int a, b;
  for(a=1;a<=5;a++){
    for(b=1;b<=a;b++){
     char name= 'A' +b-1;
        cout<<name<<" ";

    }
    cout<<endl;
  }
  cout<<endl;
  // Question no 3
  int x, y;
  for(x=10;x<=15;x++){
    for(y=10;y<=x;y++){
        cout<<y<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
   // Question no 4
   int c, d;
   for( c=1;c<=4;c++){
      for(d=1;d<=4-(c-1); d++){
        char jack= 'A'+(d-1);
        cout<<jack<<" ";
      }
      cout<<endl;
   }







}