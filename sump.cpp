#include<iostream>
using namespace std;
int mian(){


     int n;
     cin>>n;


     int q ,sum=0,p=1;
     cout<<"Given parameter" <<endl;
     cin>>q;


     if(q==1){
        for(int i=1;i<=n;i++){
         sum=sum+i;
        }
        cout<<sum;
     }else if(q==2){
          for(int i=0;i<=n;i++){
              p=p*i;
          }
          cout<<p;
     }





     








    return 0;
}