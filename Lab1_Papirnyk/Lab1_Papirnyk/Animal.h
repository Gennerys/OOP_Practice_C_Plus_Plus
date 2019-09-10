#pragma once

class Animal
{
	public:
		virtual void Move() = 0;
		virtual void Sleep() = 0;
	protected:
		int HoursNeedToSleep = 0;


};

