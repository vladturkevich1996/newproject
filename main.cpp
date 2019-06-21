﻿//------------------------------------------------------------------------------
// Main.cpp - содержит главную функцию, 
// обеспечивающую простое тестирование
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "Container.h"

//------------------------------------------------------------------------------
int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "incorrect command line! Wated: command infile outfile" << endl;
		return 1;
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);

	cout << "Start" << endl;

	Container c;
	c.In(ifst);

	ofst << "Filled container. " << endl;
	c.Out(ofst);

	c.Clear();

	ofst << "Empty container. " << endl;
	c.Out(ofst);

	cout << "Stop" << endl;
	return 0;
}
