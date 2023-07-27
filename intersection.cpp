#include<iostream>
using namespace std;
int main(){

 
 int n=5,m=4;
//  cin>>n,m;


  int array[5]={1,2,3,5,7};
 int array1[4]={2,3,4,5}; 
  
     



int i=0,j=0;
 while(i<n && j<m){
    if(array[i]==array1[j]){
            cout<<array[i]<<endl;
            i++;
            j++;        
    }else if(array[i]<array1[j]) {
        i++;
    }else if(array[i]>array1[j]){
        j++;
    }
 }











return 0;
}