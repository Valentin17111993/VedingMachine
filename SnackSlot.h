#pragma once
#include "Snack.h"

class SnackSlot
{
public:
	SnackSlot(short a);
	void DisplaySnackSlot();
	void addSnack(Snack *s);
	short getSnackCount() const;
private:
	short SnackCount;
	short lastsnack;
};