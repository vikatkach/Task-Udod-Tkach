#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

#define MODULE 256
#define ui unsigned int

using namespace std;

class IPoly {             //класс МНОГОЧЛЕН
public:
	ui n;
	vector <ui> p;

	IPoly();				//конструктор
	IPoly(vector <ui>);		//конструктор

	IPoly add(IPoly);			//метод +
	IPoly multiply(IPoly);		//метод *
	IPoly divide(IPoly);		//метод /
	IPoly mod(IPoly);			//остача  от деления
	IPoly derivate();			//производная
	IPoly integrate();			//интеграл неопределенный

	void print(ostream &);		//вывод
	ui integrate(ui, ui);		//определенный интеграл
	ui value(ui);				//значение в точке
	IPoly operator= (IPoly);	//оператор для присваивания 
	
};

IPoly operator+ (IPoly a, IPoly b);
IPoly operator- (IPoly a, IPoly b);
IPoly operator* (IPoly a, IPoly b);
IPoly operator/ (IPoly a, IPoly b);
IPoly operator% (IPoly a, IPoly b);
