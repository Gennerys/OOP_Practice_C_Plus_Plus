#include <iostream>

using namespace std;

#include "Animal.h"
#include "Fish.h"
#include "Lion.h"
#include "Bird.h"

int main()
{
	cout << "Papirnyk Alexander PZ-17-1. OOP LAB_1" << endl;
	cout << endl<<"Animal = Fish" << endl;

	Animal* animalPointer;
	animalPointer = new Fish();
	animalPointer->Move();
	animalPointer->Sleep();

	cout << endl << "Animal = Bird" << endl;
	animalPointer = new Bird();
	animalPointer->Move();
	animalPointer->Sleep();

	cout << endl << "Animal = Lion" << endl;
	animalPointer = new Lion();
	animalPointer->Move();
	animalPointer->Sleep();

	system("pause");
	return 0;
}