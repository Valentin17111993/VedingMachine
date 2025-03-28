#pragma once
#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"

class Machine
{
public:
	Machine(short SlCou);
	void DisplayM();
	void addSlot(SnackSlot *slot);
	short getEmptySlotCount() const;
private:
	short SlotCount;
	short FullSlot;
};