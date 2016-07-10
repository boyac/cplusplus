/*
* @Author: boyac
* @Date:   2016-07-10 22:14:19
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 22:25:58
*/

#include <iostream>

using namespace std;

int main(){

	//variable = (condition) ? true : false
	//int largestNum = (5>2) ? 5 : 2

	int myFavNums[5];

	int badNums[5] = {4, 13, 14, 24, 34};

	cout << "Bad Number 1: " << badNums[0] << endl;

	// multidimentional array
	char myName[5][5] = {{'D', 'e', 'r', 'e', 'k'},
						{'B', 'a', 'n', 'a', 's'}};

	cout << "2nd letter in 2nd arry: " << myName[1][1] << endl;

	myName[0][2] = 'e'; //reassign the value

	cout << "New Value: " << myName[0][2] << endl;


	// for loop
	for(int i = 1; i <= 10; i++){ // as long as i is <= 10, we will continue to increment i <- i++

		cout << i << endl;

	}

	for(int j = 0; j < 2; j++){

		for(int k = 0; k < 5; k++){

			cout << myName[j][k]; 
		}
	
	cout << endl;

	}












    return 0;
}