#ifndef __Container__
#define __Container__

#include "Animal.h"


//------------------------------------------------------------------------------
// Container.h - �������� �����,
// �������������� ���������� ���������
// �� ������ ����������� �������.
class Container
{
	enum { max_len = 100 }; // ������������ �����
	int len; // ������� �����
	Animal* cont[max_len];
public:
	void In(ifstream& ifst);     
	void Out(ofstream& ofst);   
	void Clear();  
	Container();    
	~Container() { Clear(); } // ���������� ���������� ����� ������������
};

#endif
