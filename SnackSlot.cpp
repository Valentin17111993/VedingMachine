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
	cout << " оличество батончиков, которые помещаютс€ в слот: " << this->SnackCount << " ";
	cout << endl;
	cout << " оличество батончиков в слоте: " << this->lastsnack << " ";
	cout << endl;
	if (this->SnackCount <= this->lastsnack)
	{
		cout << "ќсталось места в слоте дл€ 0 батончиков" << endl;
	}
	else
	{
		cout << "ќсталось места в слоте дл€ " << this->SnackCount - this->lastsnack << " батончиков" << endl;
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