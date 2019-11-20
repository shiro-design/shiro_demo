#include <iostream>
using namespace std;
int main (){
    cout<<"1.\tAdd Record"<<endl;
    cout<<"2.\tDelete Record"<<endl;
    cout<<"3.\tView Record"<<endl;
    cout<<"4.\tSerach Record"<<endl;
    cout<<"5.\tQuit"<<endl;
    cout<<"Enter your choice> "<<flush;
    int value;
    cin>>value;
    if(value == 1 ){
        cout<<"Adding new record..."<<endl;
    }else if(value == 2 ){
        cout<<"Delete Record"<<endl;
    }else if(value == 3 ){
        cout<<"Viewing Record"<<endl;
    }else if(value == 4 ){
        cout<<"Search Record"<<endl;
    }else if(value ==5 ){
        cout<<"Quit Record"<<endl;
    }else {
        cout<<"Invalid Option"<<endl;
    }
    return 0 ;
}