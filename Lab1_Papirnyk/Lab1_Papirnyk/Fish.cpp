#include <iostream>

using namespace std;

#include"Animal.h"
#include "Fish.h"

void Fish::Move() { cout << "Swimming underwater" << endl; }
void Fish::Sleep() { cout << "Sleeping for " << this->HoursNeedToSleep <<" hours" << endl; }
Fish::Fish() { HoursNeedToSleep = 2; }