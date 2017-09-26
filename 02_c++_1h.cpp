/*
* @Author: boyac
* @Date:   2016-07-10 22:04:55
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 22:13:14
*/

#include <iostream>

using namespace std;

int main(){

	// logic
	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if((age > 1) && (age < 16)){

		cout << "You can't drive" << endl;
	} else if(! isNotIntoxicated){
		cout << "You can't ddrive" << endl;
	} else if(age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
		cout << "You can't drive" << endl; 
	} else {
		cout << "You can drive" << endl;
	}


    return 0;

}
