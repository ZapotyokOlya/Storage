#include"Computer.h"
#include <fstream>

class Instectore;

class Tablet;

class Curator
{
public:
	void iCanModify(Tablet& obj);
	void print();
};

class Tablet : public Computer
{
	friend Instectore;
	int screen_diagonal, runtime;
	friend void Curator::iCanModify(Tablet& obj);
public:
	void information();
	virtual void toConsole();
	Tablet();
};

class Instectore
{
public:
	void iKnowAllAboutYou_console(Computer& obj)
	{
		cout<<"\n�����: "<<obj.brand<<" "<<obj.model<<" :";
	cout<<"\n������� �������� �����: "<<obj.hard_disk;
	cout<<"\n������������ �������: "<<obj.os<<"\n";
	}
	void iKnowAllAboutYou_file(Computer& obj)
	{
		ofstream file("olya.txt");
		file<<"\n�����: "<<obj.brand<<" "<<obj.model<<" :";
	file<<"\n������� �������� �����: "<<obj.hard_disk;
	file<<"\n������������ �������: "<<obj.os<<"\n";
	file.close();
	}
};