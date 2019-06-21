#ifndef __Fish__
#define __Fish__


#include "Animal.h"

enum Water
{
	RIVER,
	SEA,
	LAKE,
};



class Fish : public Animal
{
	
	int InputWater;
	Water Place;
public:
	// �������������� ��������� ������
	void InData(ifstream& ifst);  // ���� ������ �� ������
	void Out(ofstream& ofst);    // ����� ������ � ����������� �����

	// �������� ��� �������������.
	Fish() {}
};

#endif
