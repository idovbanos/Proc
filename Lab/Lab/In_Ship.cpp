#include "In_Ship.h"

Ship* In_Ship(ifstream& ifst) {
    Ship* S = new Ship; //�������� ������ ��� �������

    ifst >> S->Speed; //��������� ��������
    ifst >> S->Distance; //��������� ���������� �/� �������� ����������� � ����������
    ifst >> S->Displacement; //��������� �������������

    string Temp = ""; //��������� ������, � ������� ��������� ��� �������

    ifst >> Temp; //��������� ��� �������

    if (Temp == "Liner") {
        S->T = S->LINER;
    }
    else if (Temp == "Towboat") {
        S->T = S->TOWBOAT;
    }
    else if (Temp == "Tanker") {
        S->T = S->TANKER;
    }

    return S;
}