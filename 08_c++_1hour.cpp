/*
* @Author: boyac
* @Date:   2016-07-10 22:33:53
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 22:54:12
*/

#include <iostream>

using namespace std;

int main(){

	char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};

	string birthdayString = " Birthday";

	cout << happyArray + birthdayString << endl;


	string yourName;
	cout << "What is your name ";
	getline(cin, yourName);
	cout << "hello " << yourName << endl;

	string wholeName = yourName.assign(yourName);
	cout <<  wholeName << endl;

	string firstName = wholeName.assign(wholeName, 0, 5); // 0th - 5th character
	cout << firstName << endl;

	int lastNameIndex = yourName.find("Banas", 0);
	cout << "Index for last name " << lastNameIndex << endl;

	yourName.insert (5, "Justin");
	cout << yourName << endl;

	yourName.erase(6, 7); //delete 6th and start from 7th
	cout << yourName << endl;
	yourName.replace(6, 5,"Maximus"); // start at 6th, and replace 5 char
	cout << yourName << endl;


	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;


	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble; //convert our string into double

	cout << "What is Euler's Constant? ";
	getline(cin, eulerGuess);
	eulerGuessDouble = stod(eulerGuess);
	
	if(eulerGuessDouble == eulersConstant){
		
		cout << "You are right" << endl;

	} else {

		cout << "You are wrong" << endl;
	
	}

	cout << "Size of String " << eulerGuess.size() << endl;
	cout << "Is string empty " << eulerGuess.empty() << endl;
	cout << eulerGuess.append(" was your guess")  << endl;


    return 0;
}