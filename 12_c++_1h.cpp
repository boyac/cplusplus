/*
* @Author: boyac
* @Date:   2016-07-10 23:27:53
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 23:35:56
*/

#include <iostream>

using namespace std;


// excption handling in C++

int main(){

	int number = 0;

	try{

		if(number != 0){

			cout << 2/number << endl;

		} else throw(number);

	}
    catch(int number){

    	cout << number << " is not valid " << endl;
    }
}
