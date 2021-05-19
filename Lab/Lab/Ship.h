#ifndef SHIP_H
#define SHIP_H

#include "Key.h"

//��������� "�������"
struct Ship {
	Key K; //������������� ����������
	int Speed; //��������
	int Distance; //���������� �/� �������� ����������� � ����������
	double Cargo_weight; //����� �����
	int Displacement; //�������������

	//��� �������
	enum Type {
		LINER, //������
		TOWBOAT, //������
		TANKER //������
	};

	Type T;

};

#endif // SHIP_H