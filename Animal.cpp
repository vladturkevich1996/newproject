// Figure.cpp - Реализация функций, поддерживающих работу с базовой фигурой.
// В основном это функции и данные фабрики абстрактной фигуры.

#include "Animal.h"
#include "Bird.h"
#include "Fish.h"

//------------------------------------------------------------------------------
// Статический метод, обеспечивающий вод фигур из потока
Animal* Animal::In(ifstream& ifst)
{
	Animal* pf = nullptr;
	int k;
	// Ввод признака из файла
	ifst >> k;
	
	switch (k) {
	case 1: // прямоугольник
		pf = new Fish;
		break;
	case 2: // треугольник
		pf = new Bird;
		break;
	default:
		return nullptr;
	}
	if (pf)
		pf->InData(ifst);
	return pf;
}
