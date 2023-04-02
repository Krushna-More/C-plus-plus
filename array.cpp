#include <iostream>

using namespace std;
// #define AGE_LENGTH 4 
const int AGE_LENGTH =4;

int age[AGE_LENGTH];
float temperature[] = {31.1,23.5,38.2};

int main(){
    age[0] = 23;
    age[1] = 25;
    age[2] = 26;
    age[3] = 27;

    cout << "The Age has " << AGE_LENGTH << " elements" << endl;
    cout <<"Age[0] = " << age[0] << endl;
    cout <<"Age[1] = " << age[1] << endl;
    cout <<"Age[2] = " << age[2] << endl;
    cout <<"Age[3] = " << age[3] << endl;
    cout << endl ;
    cout <<"Temperature[0] = " << temperature[0] << endl;
    cout <<"Temperature[1] = " << temperature[1] << endl;
    cout <<"Temperature[2] = " << temperature[2] << endl;
  

    return (0);

}