#include <iostream>

using namespace std;

#include"Animal.h"
#include "Bird.h"

void Bird::Move() { cout << "Flying in the blue sky" << endl; }
void Bird::Sleep() { cout << "Sleeping for " << this->HoursNeedToSleep << " hours" <<endl; }
Bird::Bird() { HoursNeedToSleep = 5; }
