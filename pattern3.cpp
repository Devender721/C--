#include<iostream>

using namespace std;
int main(){
      int n;
      cin>>n;

      int i=1;

      while(i<=n){
        int s=1;
        while(s<=n-i){
            cout<<" ";
            s++;
    } 
       
       int val;
          int j=1;
          val=i;
        while(j<=i){
            
            cout<<val;
            j++;
            val++;
        }
          int k=2*i-2;
          while(k>i-1){
            cout<<k;
            k--;
          }
          cout<<endl;
          i++;


      }


    return 0;
}