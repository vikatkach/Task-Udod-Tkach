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

class IPoly {             //ęëŕńń ĚÍÎĂÎ×ËĹÍ.
public:
	ui n;
	vector <ui> p;

	IPoly();				//ęîíńňđóęňîđ
	IPoly(vector <ui>);		//ęîíńňđóęňîđ

	IPoly add(IPoly);			//ěĺňîä +
	IPoly multiply(IPoly);		//ěĺňîä *
	IPoly divide(IPoly);		//ěĺňîä /
	IPoly mod(IPoly);			//îńňŕ÷ŕ  îň äĺëĺíč˙
	IPoly derivate();			//ďđîčçâîäíŕ˙
	IPoly integrate();			//číňĺăđŕë íĺîďđĺäĺëĺííűé

	void print(ostream &);		//âűâîä
	ui integrate(ui, ui);		//îďđĺäĺëĺííűé číňĺăđŕë
	ui value(ui);				//çíŕ÷ĺíčĺ â ňî÷ęĺ
	IPoly operator= (IPoly);	//îďĺđŕňîđ äë˙ ďđčńâŕčâŕíč˙ 
	
};

IPoly operator+ (IPoly a, IPoly b);
IPoly operator- (IPoly a, IPoly b);
IPoly operator* (IPoly a, IPoly b);
IPoly operator/ (IPoly a, IPoly b);
IPoly operator% (IPoly a, IPoly b);
