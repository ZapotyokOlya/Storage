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
		cout<<"\nТовар: "<<obj.brand<<" "<<obj.model<<" :";
	cout<<"\nЕмкость жесткого диска: "<<obj.hard_disk;
	cout<<"\nОперационная система: "<<obj.os<<"\n";
	}
	void iKnowAllAboutYou_file(Computer& obj)
	{
		ofstream file("olya.txt");
		file<<"\nТовар: "<<obj.brand<<" "<<obj.model<<" :";
	file<<"\nЕмкость жесткого диска: "<<obj.hard_disk;
	file<<"\nОперационная система: "<<obj.os<<"\n";
	file.close();
	}
};