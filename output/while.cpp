 #include<iostream>
 using namespace std ; 
int main(){
    int i;
    
    cout<<"Enter the value of ifrom 1 to 3 : ";
    
    cin>>i;
    // while( i <= 10){
    //     x=a*i;
    //     cout<<x;
    //     i++;
    //     cout<<endl;
    // }
    // factor of a given value
      
    //    do{ if(a%i==0){
    //         cout<<i<<endl;
    //     }
    //     i++;} while(1<=a);
//     int sum=0;

//    do{
//    sum= sum+i;
//     i++;
//    }while(i<=a);
//    cout<<sum;


    //  for(i=1;i<=a; i++){
    //      if(i%4==0){
    //        break;
    //      }
    //      else{
    //         cout<<i<<endl;
    //      }
    //  } 
     // switch 
     switch(i){
       case 1 :
       cout<<"Rohit";
       break;
       case 2 :
       cout<<"Sohit";
       break;
       case 3 :
       cout<<"Mohit";
       break;
       default:
       cout<<"You entered the wrong no";
     } 

      

}