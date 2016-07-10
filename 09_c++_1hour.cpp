/*
* @Author: boyac
* @Date:   2016-07-10 22:54:25
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 23:02:30
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector <int> lotteryNumVect(10);

	int lotteryNumArray[5] = {14, 13, 14, 24, 34};

	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray,
		lotteryNumArray+3);

	lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

	cout << lotteryNumVect.at(5) << endl;

	lotteryNumVect.push_back(64);

	cout << "First Value " << lotteryNumVect.front() << endl;

	lotteryNumVect.pop_back() ;



	return 0;

}