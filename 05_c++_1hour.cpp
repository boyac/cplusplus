/*
* @Author: boyac
* @Date:   2016-07-10 22:26:17
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 22:27:21
*/

#include <iostream>

using namespace std;

int main(){

	// while loop

	int randNum = (rand() % 100) + 1;

	while(randNum != 100){

		cout << randNum << ", ";

		randNum = (rand() % 100) + 1;

	}

    return 0;
}