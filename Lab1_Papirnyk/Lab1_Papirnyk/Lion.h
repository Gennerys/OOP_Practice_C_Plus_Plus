#pragma once


class Lion : public Animal
{
public:
	void Move() override;
	void Sleep() override;
	Lion();
};

//proteced = все паблик и протектед методы станут протектед
//public = модификаторы доступа не изменятся
//private = паблик и протектед станут прайват