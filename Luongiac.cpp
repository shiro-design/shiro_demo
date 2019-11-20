#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int x;//goc nhap vao tu ban phim
    double radian;
    const double PI =3.14;
    cout<<"Moi ban nhap moot goc: "<<flush ;
    cin>>x;
    radian  = x*PI/180;

    double sinx =sin(radian);
    double cosx = cos(radian);
    double tanx = tan(radian);
    double cotanx = 1/tan(radian);

    //output 
    cout<<"sin("<<x<<")="<<sinx<<endl;
    cout<<"cos("<<x<<")="<<cosx<<endl;
    cout<<"tan("<<x<<")="<<tanx<<endl;
    cout<<"cot("<<x<<")="<<cotanx<<endl;

    return 0;
}