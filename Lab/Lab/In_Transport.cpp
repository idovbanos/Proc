#include "In_Transport.h"
#include "In_Airplane.h"
#include "In_Train.h"

Transport* In_Transport(ifstream& ifst) {
    Transport *T = new Transport; //�������� ������ ��� ����� ��������
    int K; //������������� ����������

    ifst >> K; //��������� �� ����� ������������� ����������
    if (K == 1) { //���� K == 1, �� ��� �������
        T = (Transport*)In_Airplane(ifst); //��������� ���������� � ��������
        T->K = AIRPLANE; //���������� ��, ��� ��� �������
    }
    else if (K == 2) { //���� K == 2, �� ��� �����
        T = (Transport*)In_Train(ifst);
        T->K = TRAIN; //���������� ��, ��� ��� �����
    }
    else {
        return 0;
    }

    return T;
}
