#include<iostream>
using namespace std;
int main(){
        int n,s;
        cin>>n>>s;


     int array[100];
         for(int i=0;i<n;i++){
               cin>>array[i];
         }


       for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                if(array[i]+array[j]==s){
                    cout<<array[i]<<" "<<array[j]<<endl;
                }

            }



       }

    









    return 0;
}
