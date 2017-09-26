/*
* @Author: boyac
* @Date:   2016-07-10 23:55:01
* @Last Modified by:   boyac
* @Last Modified time: 2016-07-11 00:28:45
*/

#include <iostream>
#include <vector> // honestly speaking, I'm not quite get what vector is
#include <string>
#include <fstream> // file I/O
using namespace std;


// class/ Object-oriented programming

class Animal{

	//Attributes : height weith variables
	//Capabilities : Run Eat functions / methods
	private: //encapsulated
		int height;
		int weight;
		string name;

		//static means the feature will be shared by all types of animals
		static int numOfAnimals;

	public:
		int getHeight(){ return height; }
		int getWeight(){ return weight; }
		string getName(){ return name; }
		void setHeight(int cm){ height = cm; }
		void setWeight(int kg){ weight = kg; }
		void setName(string animalName){ name = animalName; }

		void setAll(int, int, string); //declare a prototype 

		Animal(int, int, string); //constructor

		~Animal(); //destructor

		Animal(); //constructor does not receive anything 


		static int getNumOfAnimals() { return numOfAnimals; }

		void toString();

};

int Animal::numOfAnimals = 0;

void Animal::setAll(int height, int weight, string name){

	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;

}

Animal::Animal(int height, int weight, string name){

	this -> height = height;
	this -> weight = weight;
	this -> name = name;
	Animal::numOfAnimals++;

}

Animal::~Animal(){

	cout << "Animal " << this -> name << " destroyed" << endl;

}

Animal::Animal(){

	Animal::numOfAnimals++;

}

void Animal::toString(){

	cout << this -> name << " is " << this -> height <<
	" cms tall and " << this -> weight << "kgs in weight" << endl;
};


int main(){

	Animal fred; //constructor did not get attribute

	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");

	cout << fred.getName() << " is " << fred.getHeight() <<
	" cms tall and " << fred.getWeight() << " kgs n weight " << endl;

	Animal tom(36, 15, "Tom"); //use constructor that does get attribute
	cout << tom.getName() << " is " << tom.getHeight() <<
	" cms tall and " << tom.getWeight() << " kgs n weight " << endl;

    return 0;
}
