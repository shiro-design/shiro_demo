#include <iostream>
using namespace std;
 
 int main(){
     int M,N,x,y;
     if(N>=0 && M<=12345670){
         cin>>N>>M;
         x=N%10;
         y=M%10;
         cout<<x+y;
     }
     return 0;
 }a