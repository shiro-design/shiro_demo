#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
   float max = a;

     if( b > max){
         max =b;
     }

     if( c > max){
         max =c;
     }

     if( d > max){
         max =d;
     }

     if( e > max){
         max =e;
     
     }
    
     cout <<max;
   
    return 0;

}