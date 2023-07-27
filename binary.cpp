#include<iostream>
using namespace std;
int main(){
   
   int n,target;
   cin>>n>>target;

   cout<<"Enter the array numbers"<<endl;
      int array[100];
   for(int i=0;i<n;i++){
          cin>>array[i];
   }


     
     int s=0,e=n-1;
     int mid;

     while(s<e){
    mid=(s+e)/2;
      
     

       if(array[mid]==target){
          cout<<mid;
          break;
       }else if(array[mid]<target){
           s=mid;
        

       }else{
        e=mid;
       }
        


     }
     

        
  
 


    return 0;
}