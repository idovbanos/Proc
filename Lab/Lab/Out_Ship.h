#ifndef OUT_SHIP_H
#define OUT_SHIP_H

#include "Ship.h"
#include <fstream>

using namespace std;

//������� ������ ���������� � �������
void Out_Ship(int Speed, int Distance, Ship* S, ofstream& ofst);

#endif // OUT_SHIP_H