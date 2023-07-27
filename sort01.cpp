#include<iostream>
using namespace std;
int main(){
  int n=7;
  int array[7]={0,0,1,0,1,1,0};
  int count=0;
  for(int i=0;i<n;i++){
    if(array[i]==0){
    count++;}
  }

  for(int i=0;i<n;i++){
    if(i<count){
        array[i]=0;
    }else{
        array[i]=1;
    }
  }
   

for(int i=0;i<n;i++){
    cout<<array[i];
  }



    return 0;
}