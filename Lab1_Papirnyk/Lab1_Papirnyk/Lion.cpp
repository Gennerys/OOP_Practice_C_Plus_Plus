#include<iostream>

using namespace std;

#include"Animal.h"
#include "Lion.h"

void Lion::Move() { cout << "Walking on his feet"<<endl; }
void Lion:: Sleep() { cout << "Sleeping for "<< this-> HoursNeedToSleep<<" hours" << endl; }
Lion::Lion() { HoursNeedToSleep = 10; }