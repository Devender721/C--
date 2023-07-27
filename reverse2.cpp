#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    int array[100];
    
    for(int i=0;i<n;i++){
        cin>>array[i];
    }


     int s=0;int e=n-1;
     int temp=0;
     while(s<=e){
        temp=array[s];
        array[s]=array[e];
        array[e]=temp;
        s++;
        e--;

     }   
      
      
     
     
     

     cout<<"reverse the array:)"<<endl;
     
       for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
     














    return 0;
}   