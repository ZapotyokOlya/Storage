#include"Product.h"
#ifndef EQUIPMENT_H    // если имя  ещё не определено
#define EQUIPMENT_H // определить имя 

class Equipment : public Product
{
public:
	char* model;
	static const int msize = 7;
	Equipment();
	static int objectCounter;
	void setModel(char* _model)
	{
	model = _model;
	}
	char getModel()
	{
	return *model;
	}
	void information();
	virtual void toConsole();
	void printObjectCounter();
};
#endif EQUIPMENT_H // если  имя  уже определено, повторно не определять