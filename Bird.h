#ifndef __Bird__
#define __Bird__


#include "Animal.h"


class Bird : public Animal
{
	bool flight;
	
public:
	// �������������� ��������� ������
	void InData(ifstream& ifst);  // ���� ������ �� ������
	void Out(ofstream& ofst);     // ����� ������ � ����������� �����

	// �������� ��� �������������.
	Bird() {}
};

#endif
