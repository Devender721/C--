#include<iostream>
using namespace std;
int main(){


   int n;
   cin>>n;
   
//    int l=n/10;
  int rem=0;
   while(n!=0){
    
       int r=n%10;
       rem=r+(rem*10);

       n=n/10;



   }
   cout<<rem;




    return 0;
}