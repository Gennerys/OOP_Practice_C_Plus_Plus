#pragma once


class Lion : public Animal
{
public:
	void Move() override;
	void Sleep() override;
	Lion();
};

//proteced = ��� ������ � ��������� ������ ������ ���������
//public = ������������ ������� �� ���������
//private = ������ � ��������� ������ �������