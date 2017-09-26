/*
* @Author: boyac
* @Date:   2016-07-10 23:02:41
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 23:15:54
*/

#include <iostream>

using namespace std;

int addNumbers(int firstNum, int secondNum = 0){
	int combinedValue = firstNum + secondNum;
	return combinedValue;
}

// overload function, same name different attribute

int addNumbers(int firstNum, int secondNum, int thirdNum){
	return firstNum + secondNum + thirdNum;
}

//recursive function

int getFactorial(int number){

	int sum;
	if(number == 1) sum = 1;
	else sum = getFactorial(number - 1) * number;
	return sum;
}

int main(){

	cout << addNumbers(1) << endl;
	cout << addNumbers(1, 5, 6) << endl;
	cout << "The getFactorial of 3 is " << getFactorial(3) << endl;
    return 0;
}

