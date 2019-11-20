#include <iostream>
#include <iomanip>
using namespace std; 
int main(){
    float fValue = 126.415555;
    cout <<"Size of Float"<< sizeof(float)<<endl;
    cout<< setprecision(20)<<fixed << fValue << endl;
    double dValue = 126.415555;
  cout<< setprecision(20)<<fixed << dValue << endl;
   cout <<"Size of doule: "<< sizeof(double)<<endl;

  long double  lValue = 126.415555;
   cout<< setprecision(20)<<fixed << lValue << endl;
    cout <<"Size of long double: "<< sizeof(long double)<<endl;
    return 0; 
}