#include "In_Train.h"

Train* In_Train(ifstream& ifst) {
    Train* T = new Train; //�������� ������ ��� ������

    ifst >> T->Speed; //��������� ��������
    ifst >> T->Distance; //��������� ���������� �/� �������� ����������� � ����������
    ifst >> T->Cargo_weight; //��������� ����� �����
    ifst >> T->�ars_amount; //��������� ����� �������
    
    return T;
}