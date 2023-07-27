#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
     int array[20];
     for(int i=0;i<n;i++){
      cin>>array[i];
     }


     int ans=array[0]; 
    for(int i=1;i<n;i++){
        ans=ans^array[i];
            
    
    }

  cout <<ans<<endl;



    return 0;
}