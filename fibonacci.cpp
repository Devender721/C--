#include<iostream>
using  namespace std;
int main(){

   int n;
   cin>>n;


   int temp,a=0,b=1;

   for(int i=0;i<n-1;i++){
      temp=b;
      b=a+b;
      a=temp;
   }
  

cout<<"Nth order of fiboanacci"<<b<<endl;





    return 0;
} 