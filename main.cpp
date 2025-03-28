#include <iostream>
#include "Snack.h"
#include "SnackSlot.h"
#include "Machine.h"
using namespace std;

int main()
{
	int a, b;
	setlocale(LC_ALL, "");
	Snack* bounty = new Snack("Bounty", 25, 85);
	Snack* snickers = new Snack("Snickers", 30, 80);
	SnackSlot* slot = new SnackSlot(15);
	Machine* M = new Machine(10);
	bool op = true;
	while (op)
	{
		cout << "Выберите батончик для заполнения слота: 1 - Bounty, 2 - Snickers или 0 для выхода " << endl;
		cin >> a;
		cout << "Сколько положить?" << endl;
		cin >> b;
		switch (a)
		{
		case 0:
			op = false;
			break;

		case 1:
		{
			int res1 = 0;
			for (int i = 1; i <= b; i++)
			{
				slot->addSnack(bounty);
				res1++;
			}
			if (b > slot->getSnackCount())
			{
				M->addSlot(slot);
			}
			cout << "Осталось батончиков Bounty " << bounty->getCount() - res1 << endl;
			bounty->DisplaySnack();
			slot->DisplaySnackSlot();
			M->DisplayM();
			break;
		}
		case 2:
		{
			int res2 = 0;
			for (int i = 1; i <= b; i++)
			{
				slot->addSnack(snickers);
				res2++;
			}
			if (b > slot->getSnackCount())
			{
				M->addSlot(slot);
			}
			cout << "Осталось батончиков Snickers " << snickers->getCount() - res2 << endl;
			snickers->DisplaySnack();
			slot->DisplaySnackSlot();
			M->DisplayM();
			break;
		}
		default:
			cout << "Выберите товар от 1 до 2 или 0, чтобы выйти " << endl;
			break;
		}

	}
	cout << "Количество пустых слотов: " <<  M->getEmptySlotCount() << endl;
	delete bounty;
	delete snickers;
	delete slot;
	delete M;

	return 0;
}