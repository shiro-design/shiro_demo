#include <iostream>
using namespace std;
int main(){

     const string pass = "Hello";
    
    
    
    string input;
 

    do {
        cout <<"Enter your pass > "<<flush;
    cin >>input;
     
     if(input != pass){
         cout<<"Access denied"<<endl;
     }

    }while (input != pass);


    cout << "Pass accepted" <<endl;

     return 0; 
}