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

class IPoly {             //����� ���������
public:
	ui n;
	vector <ui> p;

	IPoly();				//�����������
	IPoly(vector <ui>);		//�����������

	IPoly add(IPoly);			//����� +
	IPoly multiply(IPoly);		//����� *
	IPoly divide(IPoly);		//����� /
	IPoly mod(IPoly);			//������  �� �������
	IPoly derivate();			//�����������
	IPoly integrate();			//�������� ��������������

	void print(ostream &);		//�����
	ui integrate(ui, ui);		//������������ ��������
	ui value(ui);				//�������� � �����
	IPoly operator= (IPoly);	//�������� ��� ������������ 
	
};

IPoly operator+ (IPoly a, IPoly b);
IPoly operator- (IPoly a, IPoly b);
IPoly operator* (IPoly a, IPoly b);
IPoly operator/ (IPoly a, IPoly b);
IPoly operator% (IPoly a, IPoly b);
