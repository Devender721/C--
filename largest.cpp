#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    
    int array[8];
    
    for(int i=0;i<=n;i++)
    {
        cin>>array[i];
    }
    int lag=array[0];
    for(int i=1;i<=n;i++){
       if(lag<=array[i]){
        lag=array[i];
       }
       
    }
    
    cout<<lag<<endl;
    
    
    
    
    
    
    return 0;

}
