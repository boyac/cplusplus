/*
* @Author: boyac
* @Date:   2016-07-10 21:41:40
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 23:30:04
*/


#include <iostream>
#include <vector> // honestly speaking, I'm not quite get what vector is
#include <string>
#include <fstream> // file I/O


using namespace std;

int main(){
    cout  << "Hello World! " << endl;
    
    //variable & data type
    const double  PI = 3.1415; //const is a constant, all upper case for const
    char myGrad = 'A';
    bool isHappy = false; // bool variable always start with 'is'
    int myAge = 39;
    float favNum = 777;
    double otherfavNum = 777.777;
    cout << "favorite Number" << favNum << endl; // endl for end character terms
    cout << "Size of int " << sizeof(myAge) << endl;
 

 	// arithmatic +, -, *, /, %, ++, --
 	cout << "5 + 2 = " << 5+2 << endl;
 	cout << "5 - 2 = " << 5-2 << endl;
 	cout << "5 * 2 = " << 5*2 << endl;
 	cout << "5 / 2 = " << 5/2 << endl;
 	cout << "5 % 2 = " << 5%2 << endl;


 	int five = 5; 
 	cout << "5++ = " << five++ << endl;
 	cout << "++5 = " << ++five << endl;
 	cout << "5-- = " << five-- << endl;
 	cout << "--5 = " << --five << endl;

 	// Order of Operations states * and / i perform befor +, -
 	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
 	cout << "4 / 5 = " << (float)4 / 5 << endl;

    return 0; // 0 means the execution went through really fine

}