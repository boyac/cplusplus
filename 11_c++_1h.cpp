/*
* @Author: boyac
* @Date:   2016-07-10 23:13:35
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-10 23:33:48
*/

#include <iostream>
#include <fstream>

using namespace std;

// file I/O; reading and writing file in C++
int main(){

	string steveQuote = "Love is crazy"; 
	
	ofstream writer("stevequote.txt");
	
	if(! writer){ // variable file stream is there

		cout << "Error opening file " << endl;
		return -1;

	} else {

		writer << steveQuote << endl;		
		writer.close();
	
	}

	ofstream writer2("stevequote.txt", ios::app);

	if(! writer2){

		cout << "Error opening file" << endl;
		return -1;

	} else {

		writer2 << "\n - Steve Martin" << endl;
		writer2.close();

	}

	char letter;

	ifstream reader("stevequote.txt");

	if(! reader){

		cout << "Error opening file " << endl;
		return -1;

	} else {

		for(int i = 0; ! reader.eof(); i++){ // read until the end of the file

			reader.get(letter);
			cout << letter;

		}

		cout << endl;
		reader.close();
	}
    
}
