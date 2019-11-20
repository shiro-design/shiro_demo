#include <iostream>
#include <climits>

using namespace std;
int main (){
    int  value = 54656;
    cout << value << endl;
    cout << "Max int value : "<< INT_MAX << endl;
    cout << "Min int value : "<< INT_MIN << endl;

    long int  lvalue = 264616165165165;
    cout << lvalue << endl;

    short int svalue = 12555;
    cout << svalue << endl;

    cout << "Size of int : "<< sizeof(int)<< endl;
    cout << "Size of long int  : "<< sizeof(long int)<< endl;
    cout << "Size of short int : "<< sizeof(short int)<< endl;

    unsigned int Value = 23423654;
    cout << Value << endl;
    return 0;
}