#ifndef __Bird__
#define __Bird__


#include "Animal.h"


class Bird : public Animal
{
	bool flight;
	
public:
	// переопределяем интерфейс класса
	void InData(ifstream& ifst);  // ввод данных из потока
	void Out(ofstream& ofst);     // вывод данных в стандартный поток

	// создание без инициализации.
	Bird() {}
};

#endif
