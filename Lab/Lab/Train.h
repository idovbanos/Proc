#ifndef TRAIN_H
#define TRAIN_H

#include "Key.h"

//��������� "�����"
struct Train {
	Key K; //������������� ����������
	int Speed; //��������
	int Distance; //���������� �/� �������� ����������� � ����������
	double Cargo_weight; //����� �����
	int �ars_amount; //����� �������
};

#endif // TRAIN_H