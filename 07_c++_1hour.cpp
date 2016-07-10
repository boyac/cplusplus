/*
* @Author: boyac
* @Date:   2016-07-10 22:29:31
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 22:38:44
*/

#include <iostream>

using namespace std;

int main(){

	string numberGuessed;
	int intNumberGuessed = 0;


	do {
		
		cout << "Guess between 1 and 10: " ;

		getline(cin, numberGuessed); //cin source of user in put, and store in numberGussed

		intNumberGuessed = stoi(numberGuessed);

		cout << intNumberGuessed << endl;

	} while(intNumberGuessed != 4);

	cout << "You win" << endl;
    return 0;
}