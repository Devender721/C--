#include<iostream>
using namespace std;

int main(){



  int n=5;
  int array[5]={1,2,3,4,4};

// Brute force approach :)
//   for(int i=0;i<n;i++){
//            for(int j=i+1;j<n;j++){
//             if(array[i]==array[j]){
//                 cout<<array[j]<<endl;
//                 break;
//             }
//            }
//   }



    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^array[i];
    }
    for(int i=1;i<n;i++){
        ans=ans^array[i];
    }

  cout<<ans<<endl;













    return 0;
} 