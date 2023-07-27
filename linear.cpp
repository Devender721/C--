#include<iostream>
using namespace std;
int linear(int array[],int n,int x){
   
   for(int i=0;i<n;i++){
     if(array[i]==x){
        return i;
        break;

     }
   }
   return  -1;





}
int main(){

    

  int n;
  cin>>n;
  
  int array[100];
   
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

   int x;
   cout<<"Enter the search number"<<endl;
   cin>>x;


   int index=linear(array,n,x);
   cout<<index<<endl;












    return 0;
}