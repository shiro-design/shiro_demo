#include <iostream>
using namespace std;

int main(){

    /*int x =5,y=3;
    int z=x-- - ++y +2;
    //step1:++y==>y=4;
    //step2:5-4+2=3;
    //step3:x--==>x=4;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    cout<<"Z="<<z<<endl;*/

    
    int x =5,y=10;
    int z=++x - y-- +2;
    //step1:++x==>x=6;
    //step2:6-10+2=-2;
    //step3:y--==>y=9;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    cout<<"Z="<<z<<endl;

    return 0;



}