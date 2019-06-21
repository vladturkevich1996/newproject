// Figure.cpp - ���������� �������, �������������� ������ � ������� �������.
// � �������� ��� ������� � ������ ������� ����������� ������.

#include "Animal.h"
#include "Bird.h"
#include "Fish.h"

//------------------------------------------------------------------------------
// ����������� �����, �������������� ��� ����� �� ������
Animal* Animal::In(ifstream& ifst)
{
	Animal* pf = nullptr;
	int k;
	// ���� �������� �� �����
	ifst >> k;
	
	switch (k) {
	case 1: // �������������
		pf = new Fish;
		break;
	case 2: // �����������
		pf = new Bird;
		break;
	default:
		return nullptr;
	}
	if (pf)
		pf->InData(ifst);
	return pf;
}
