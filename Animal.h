#ifndef __Animal__
#define __Animal__

//------------------------------------------------------------------------------
// Animal.h - �������� �������� ����������� ���������,
// ���������� �������� ������� ��� ���� ������ ��������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

//------------------------------------------------------------------------------

// �����, ����������� ��� ��������� ��������.
// �������� �����������, �����������, ��� �����, �������� ���������� 
class Animal {
public:
	char name[255];
	// �������������, ���������� � ���� ��������� �� ������
	static  Animal* In(ifstream& ifst);

	virtual void InData(ifstream& ifst) = 0;  // ���� ������ �� ������
	virtual void Out(ofstream& ofst) = 0;     // ����� ������ � ����������� �����
//  protected:
//    Animal() {};
};

#endif
