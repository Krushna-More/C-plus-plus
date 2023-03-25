#include <iostream>

using namespace std;

int a,b = 5;
int main(){
     bool my_flag;
     a=7;
     my_flag =false;
     cout <<"a =" << a << endl;
     cout <<"b =" << b << endl;
     cout << "flag =" << my_flag << endl ;
     my_flag = true;
     cout << "flag =" << my_flag << endl ;
     cout <<"a + b =" << a+b << endl;
     cout <<"a - b =" << a-b << endl;
     unsigned int positive ;
     positive = b - a;
     cout <<"positive =" << positive << endl;
     return (0);
}