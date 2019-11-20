#include <iostream>
using namespace std;

int main(){

    int  t ;
    int hour,minute,second;
    cout<<"Moi ban nhap vao mot so giay: "<<flush;
    cin>>t;
    hour=(t/3600)%24;
    minute = (t%3600)/60;
    second = (t%3600)%60;
    int hourtemp = hour>12?hour-12:hour;
    cout <<hourtemp<<":"<<minute<<":"<<second<<(hour>12?" PM":" AM")<<endl;

    return 0;
}