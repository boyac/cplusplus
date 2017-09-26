/*
* @Author: boyac
* @Date:   2016-07-10 23:34:20
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-11 00:02:21
*/

#include <iostream>

using namespace std;

void makeMeYoung(int* age){ //void not going to return anything

	cout << "I used to be " << *age << endl;
	*age = 21;
}

void actYourAge(int& age){

	age = 39;
}

// pointers

int main(){

	int myAge = 39;
	char myGrade = 'A';

	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;

	cout << "myAge is locate at " << &myAge << endl;
   
    // pointer is going to store a memory location
	// * to create a pointer
 	int* agePtr = &myAge;

	cout << "Address of poiter " << agePtr << endl;

	// dereference the address 
	cout << "Data at memory address " << *agePtr << endl;

	int badNums[5] = {4, 13, 14, 24, 34};

	int* numArrayPtr = badNums;

	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	numArrayPtr++; // ++ to increment, to get the next number in our array

	cout << "Address" << numArrayPtr << " Value " << *numArrayPtr << endl;
 
 	// the array name is just the pointer to the array
	cout << "Address" << badNums << " Value " << *badNums << endl;


	makeMeYoung(&myAge);

	cout << "I'm " << myAge << "years old now" << endl;

	int& ageRef = myAge; //myAge <- pointer

	cout << "myAge : " << myAge << endl;

	ageRef++; //incremet the reference by ++

	cout << "myAge : " << myAge << endl;

	actYourAge(ageRef);

	cout << "myAge : " << myAge << endl;

    return 0;

}
