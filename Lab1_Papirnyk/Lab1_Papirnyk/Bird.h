#pragma once

class Bird : public Animal
{
	public:
	void Move() override;
	void Sleep() override;
	Bird();
};

