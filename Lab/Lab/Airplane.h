#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "Key.h"

//��������� "�������"
struct Airplane {
	Key K; //������������� ����������
	int Speed; //��������
	int Distance; //���������� �/� �������� ����������� � ����������
	int Flight_range; //��������� ������
	int Load_capacity; //����������������
};

#endif // AIRPLANE_H