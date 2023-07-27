#include<iostream>
using namespace std;
int main(){

   
   int n;
   cin>>n;

   int array[20];
      
      
      
   int val=1;   
   int s=0,e=n-1;
   while(s<=e){
         

         if(val%2==1){
          array[s]=val;
            s++;
            val++;
  
         }
          else{
          array[e]=val; 
        
          e=e-1;
          val++;}   
    }


   for(int i=0;i<n;i++){
    cout<<array[i];
   }



return 0;
}