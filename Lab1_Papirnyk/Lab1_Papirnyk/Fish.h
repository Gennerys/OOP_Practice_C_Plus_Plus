#pragma once

class Fish : public Animal
{
public:
	void Move() override;
	void Sleep() override;
	Fish();
};

