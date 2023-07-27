#include<iostream>
using namespace std;    
   
   
   
    int main(){ 
     char ch;
   cin>>ch;

  int i=0,d=0,s=0;

  while(ch!='$'){
	  if(ch>='0' && ch<='9'){
		  d++;
		  ch=cin.get();
	  }
	 else if(ch>='a' && ch<='z'){
		  i++;
		  ch=cin.get();
	  }

	  else{
		  s++;
		  ch=cin.get();
	  }
  }
     
	 cout<<i<<d<<s;
     
	 



   return 0;
    }