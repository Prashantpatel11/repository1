#include<iostream>
using namespace std;
int main(){
    // int array[5]={1,2,3,4,5};
    // int a,b;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // for(int i=0; i<6;i++){
    //        b=array[i];
    //     if(b==a){
    //         cout<<i;
    //     }
    //     return -1;

    // Question no 2
     
    //  char array[26];
    //  int alpha='a';
    //  for( int i= 1; i<27; i++){
    //   alpha =alpha+i;
    //     alpha =array[i];
    //  }
    //  for( int j=1 ;j<27;j++){
    //     cout<<array[j]<<endl;
    //  }

    int sim[5]={1,2,3,4,5};
    int start =0, end=5;
    while(start<end){
        swap(sim[start],sim[end]);
        end--;
        start++;
    }
  for(int i=0;i<5;i++){
    cout<<sim[i]<<" ";
  }



    }

    

