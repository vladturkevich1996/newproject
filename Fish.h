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
	// переопределяем интерфейс класса
	void InData(ifstream& ifst);  // ввод данных из потока
	void Out(ofstream& ofst);    // вывод данных в стандартный поток

	// создание без инициализации.
	Fish() {}
};

#endif
