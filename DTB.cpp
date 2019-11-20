#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double toan,ly,hoa,dtb;
    cout<<"Chuong trinh tinh diem trung binh"<<endl;
    cout<<"Nhap diem toan: "<<flush;
    cin>>toan;
    cout <<"Nhap diem ly: "<<flush;
    cin>>ly;
    cout <<"Nhap diem hoa: "<<flush;
    cin>>hoa;
    dtb = (toan  + ly + hoa )/3;
    cout<<"Diem trung binh= "<<dtb<<endl;
    cout<<"Diem trung binh lam tron= "<<setprecision(3)<<dtb;
    




    return 0;
}