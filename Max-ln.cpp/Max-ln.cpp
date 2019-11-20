/*#include<iostream>
using namespace std;

int main(){
     int min,a,b,c,d,x;
     cin>>x;
     a= x/1000;
     b= (x % 1000)/100;
     c= (x % 100)%10;
     d = x % 10;
     int max =a;
     if(b > max){
         max= b;
     }else if ( c > max){
         max= c;
     }else if(d> max){
         max = d;
     }
      if(b <  a){
          min =b ;
      }else if(c < a){
          min =c;
      }else if (d< a){
          min=d;
      }
      cout <<min+max;

    return 0;
}*/
#include <iostream>
using namespace std;
int main() 
{
	int max, min;
	int a;
	cin >> a;
	max = a % 10;
	min = a /1000 ;
	while (a) {
		int b = a % 10;
		a /= 10;
		if (max < b) {
			max = b;
		}
		if (min > b) {
			min = b;
		}
	}
	cout << min + max << endl;
	
}