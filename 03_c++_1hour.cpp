/*
* @Author: boyac
* @Date:   2016-07-10 22:11:01
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 22:13:48
*/

#include <iostream>

using namespace std;

int main(){

	int greetingOption = 2;

	switch(greetingOption){

		case 1:
			cout << "bonjour" << endl;
			break;
		
		case 2:
			cout << "Hola" << endl;

		case 3:
			cout << "Aloha" << endl;

		default:
			cout << "Hello" << endl;

	}

    return 0;
}