#include "In_Airplane.h"

Airplane* In_Airplane(ifstream& ifst) {
    Airplane* A = new Airplane; //�������� ������ ��� �������
    
    ifst >> A->Speed; //��������� ��������
    ifst >> A->Distance; //��������� ���������� �/� �������� ����������� � ����������
    ifst >> A->Cargo_weight; //��������� ����� �����
    ifst >> A->Flight_range; //��������� ��������� ������
    ifst >> A->Load_capacity; //��������� ����������������

    return A;
}