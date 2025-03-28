#pragma once

class Snack
{
public:
	Snack(const char* n);
	Snack(const char* n, short SC);
	Snack(const char* n, short sc, double pr);
	void DisplaySnack();
	short getCount() const;
private:
	const char* Name;
	short Count;
	double Price;
};