#include<iostream>
using namespace std;
int main(){
    int row, col, n;
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<"  ";}
            for(col=1;col<=row;col++){
                cout<<"* ";
            }
        cout<<endl;
        }

        int x,y;
        for( x=1;x<=n;x=x+1){
            for(y=1;y<=n-x; y++){
                cout<<"  ";
            }
            for( y=x;y>=1; y--){
                cout<<y<<" ";
            }
            cout<<endl;
        }

        // Question no 3
        int a,b;
        for( a=1;a<=n;a++){
            for(b=1;b<=n-a;b++){
                cout<<"  ";
            }
            for(b=1;b<=a;b++){
               char name= 'A'+(b-1);
                cout<<name<<" ";
            }
            cout<<endl;
        }
    }
