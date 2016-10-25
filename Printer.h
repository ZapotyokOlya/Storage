#include"Equipment.h"


class Printer : public Equipment
{
public:
	char* type;
	int str_in_month;
	void information();
	virtual void toConsole();
	Printer();
};

class Print : protected Printer
{
protected:
	char* name_;
public:
	char* laser, *inkjet, *thermal_inkjet;
	Print();
	void information();
};

class Laser : public Print
{
public:
Laser();
};