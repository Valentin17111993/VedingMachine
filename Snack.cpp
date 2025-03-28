#include <iostream>
#include "Snack.h"
using namespace std;

Snack :: Snack(const char* n)
{
	this->Name = n;
}
Snack::Snack(const char* n, short SC)
{
	this->Name = n;
	this->Count = SC;
}
Snack::Snack(const char* n, short sc, double pr)
{
	this->Name = n;
	this->Count = sc;
	this->Price = pr;
}
void Snack::DisplaySnack()
{
	cout << this->Name << " " << "Общее количество батончиков: " << this->Count << " " << "Цена: " << this->Price << endl;
}
short Snack::getCount() const
{
	return this->Count;
}
