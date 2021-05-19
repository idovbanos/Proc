#include "Out_Transport.h"
#include "Out_Airplane.h"
#include "Out_Train.h"
#include "Out_Ship.h"

void Out_Transport(Transport* T, ofstream& ofst) {
    if (T->K == AIRPLANE) {
        Out_Airplane(T->Speed, T->Distance, T->Cargo_weight, (Airplane*)T, ofst); //������� ���������� � ��������
    }
    else if (T->K == TRAIN) {
        Out_Train(T->Speed, T->Distance, T->Cargo_weight, (Train*)T, ofst); //������� ���������� � ������
    }
    else if (T->K == SHIP) {
        Out_Ship(T->Speed, T->Distance, T->Cargo_weight, (Ship*)T, ofst); //������� ���������� � �������
    }
    else {
        ofst << "Incorrect element!" << endl;
    }
}
