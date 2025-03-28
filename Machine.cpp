#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "Machine.h"
using namespace std;

Machine::Machine(short SlCou)
{
	this->SlotCount = SlCou;
	this->FullSlot = 0;
}
void Machine :: DisplayM()
{
	cout << "Class Machine: " << endl;
	cout << "���������� ������ � ��������: " << this->SlotCount << " ";
	cout << endl;
	cout << "���������� ������ ������: " << this->FullSlot << " ";
	cout << endl;
}
void Machine::addSlot(SnackSlot *slot)
{
	FullSlot++;
}
short Machine::getEmptySlotCount() const
{
	short res = this->SlotCount - this->FullSlot;
	return res;
}