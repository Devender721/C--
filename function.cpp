#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
  for(int i=1;i<=n;i++){
       ans=ans*i;
  }
   
  return ans;
}



int main(){
    



    int n,r;
    cin>>n>>r;
    

     int output=fact(n)/(fact(r)*fact(n-r)); 
    cout<<output<<endl;
    
    
    
    
    
    return 0;

}