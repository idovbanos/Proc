#ifndef CONTAINER_H
#define CONTAINER_H

#include "Transport.h"

//���������
struct Container {
    int Len; //����� ����������
    Transport* Cont; //��������� �� ���������
    Container* Prev; //��������� �� ���������� ������� ����������
    Container* Next; //��������� �� ��������� ������� ����������
};

#endif // CONTAINER_H