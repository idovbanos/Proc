#include "In_Train.h"

Train* In_Train(ifstream& ifst) {
    Train* T = new Train; //�������� ������ ��� ������

    ifst >> T->Speed; //��������� ��������
    ifst >> T->Distance; //��������� ���������� �/� �������� ����������� � ����������
    ifst >> T->�ars_amount; //��������� ����� �������
    
    return T;
}