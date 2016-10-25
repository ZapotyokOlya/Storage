#include"Product.h"
#ifndef EQUIPMENT_H    // ���� ���  ��� �� ����������
#define EQUIPMENT_H // ���������� ��� 

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
#endif EQUIPMENT_H // ����  ���  ��� ����������, �������� �� ����������