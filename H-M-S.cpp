#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a < 0 || a >23 || b <0 || b >59 || c < 0 || c > 59) {cout<<"NO";
    }else {
        cout<<"YES";
        c++;
        if(c >= 60){
            c =0;
            b+=1;
                if(b==60){
                    b =0;
                    a+= 1;
                        if(a==24){
                            a=0;
                        }
                }
                cout<<a<<":"<<b<<":"<<c;

        }
        return 0;
    }



    return 0;
}