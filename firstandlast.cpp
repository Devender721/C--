#include<iostream>
using namespace std;

int main(){

    
// 8 2
    int n=8;
     int k=2;
// 0 0 1 1 2 2 2 2
    int array[8]={0,0,1,1,2,2,2,2};

    
    int s=0,e=n-1;

    while(s<=e){
        if(array[s]==k){
            cout<<s<<endl;
        }else if(array[e]==k){
                  cout<<e<<endl;
        }else{
            s++;
            e--;
        }
    }

    
   






    return 0;
}