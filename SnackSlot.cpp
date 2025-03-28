#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
using namespace std;

SnackSlot::SnackSlot(short a)
{
	this->SnackCount = a;
	this->lastsnack = 0;
}
void SnackSlot::DisplaySnackSlot()
{
	cout << "Class Snack slot: " << endl;
	cout << "���������� ����������, ������� ���������� � ����: " << this->SnackCount << " ";
	cout << endl;
	cout << "���������� ���������� � �����: " << this->lastsnack << " ";
	cout << endl;
	if (this->SnackCount <= this->lastsnack)
	{
		cout << "�������� ����� � ����� ��� 0 ����������" << endl;
	}
	else
	{
		cout << "�������� ����� � ����� ��� " << this->SnackCount - this->lastsnack << " ����������" << endl;
	}
}
void SnackSlot :: addSnack(Snack *s)
{
	this->lastsnack++;
}
short SnackSlot :: getSnackCount() const
{
	return this->SnackCount;
}