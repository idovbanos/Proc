#ifndef OUT_AIRPLANE_H
#define OUT_AIRPLANE_H

#include "Airplane.h"
#include <fstream>

using namespace std;

//������� ������ ���������� � ��������
void Out_Airplane(int Speed, int Distance, double Cargo_weight, Airplane* A, ofstream& ofst);

#endif // OUT_AIRPLANE_H