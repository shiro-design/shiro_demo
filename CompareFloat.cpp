#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    float value =1.1;
    if(value < 1.11 ){
        cout<<"equal"<<endl;
    }else{
        cout<<"not equal"<<endl;
    }
    cout<<setprecision(10)<<value<<endl;
    return 0;

}