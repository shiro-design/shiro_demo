


#include <iostream>
using namespace std;

int main(){
/* break...
for (int i =0; i <5 ;i++ ){
    cout <<  "i is: "<<i <<endl;

    if (i ==3 ){
        break;
    }
    cout <<"Looping ...."<<endl;

}*/

/* continue...
for (int i =0; i <5 ;i++ ){
    cout <<  "i is: "<<i <<endl;

    if (i ==3 ){
            cout <<"Hello ";
        continue;
    }
    cout <<"Looping ...."<<endl;

}
*/

  const string pass = "Hello";
    
    
    
    string input;

    do {
        cout <<"Enter your pass > "<<flush;
    cin >>input;
     
     if(input == pass){
         break;
     }
     else {
        cout<<"Access denied"<<endl;
     }
         

    }while (true);


    cout << "Pass accepted" <<endl;


cout <<"Program Quitting..."<<endl;
return 0;
}








