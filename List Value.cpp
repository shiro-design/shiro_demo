#include <iostream>
using namespace std;

int main(){

    cout <<"Array of integer:"<<endl;
    cout <<"==================="<<endl;
    int values[3];
     
     values[0] = 88;
       values[1] = 123;
         values[2] = 7;

         cout <<values[3]<<endl;

    cout << values[0]<<endl;
    cout << values[1]<<endl;
    cout << values[2]<<endl;

    cout<<"Array of double"<<endl;
cout << "====================="<<endl;

double numbers[4] = {4.5 , 2.3 , 7.2 ,8.1};

for ( int i = 0 ; i< 4 ;i++){
    cout <<"Element of index "<<i<< ":"<<numbers[i]<<endl;
}
  cout<<"Intializating with zero values"<<endl;
  cout << "====================="<<endl;

  int numberArray[8]= {};

for ( int i = 0 ; i< 8 ;i++){
    cout <<"Element of index "<<i<< ":"<<numberArray[i]<<endl;
}
//Array of strings
 cout<<"Intializating with string values"<<endl;
  cout << "====================="<<endl;

string texts[]={"apple","banana","orange"};

for ( int i = 0 ; i< 3 ;i++){
    cout <<"Element of index "<<i<< ":"<<texts[i]<<endl;
}






     return 0;
}