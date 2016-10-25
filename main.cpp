#include<iostream>
#include"Product.h"
#include"Equipment.h"
#include"Computer.h"
#include"Tablet.h"
#include"Scanner.h"
#include"Printer.h"

using namespace std;

void first_func()
{
Product *equipment[2];
	equipment[0] = new Computer();
	equipment[1] = new Tablet();
	equipment[2] = new Printer();

	for (int i = 0; i < 2; ++i)
		 {
			 cout<<"---------------------\n";
			 equipment[i]->information();
	}
}

void casts()
{
	Computer a;
	cout<<"\nDynamic_cast понижающее: \n";
Computer* computer=new Tablet;
Tablet * tablet = dynamic_cast<Tablet*>(computer);
	tablet->information();
	cout<<"\nDynamic_cast повышающее: \n";
	Printer* tablet_2 = new Printer;
	Equipment* computer_2 = dynamic_cast<Equipment*>(tablet_2);
	computer_2->information();
	cout<<"\nDynamic_cast перекрестное: \n";
	Computer* computer_3 = new Computer;
	Equipment* equipment = new Printer;
	Printer* printer1 = dynamic_cast<Printer*>(equipment);
	printer1->information();
	
	float _year;
	cout<<"\nВведите год выпуска: ";
	cin>>_year;
	a.setOs_y(_year);
	cout<<"\n Версия ОС: "<<static_cast<int>(a.getOs_y());

	const double abs = 9.9;
	cout<<const_cast<double*>(&abs);
}

void main()
{
	system("chcp 1251");
	Computer comp;
	Tablet j;
	comp.in();
	comp.toConsole();
	comp.printObjectCounter();
	Instectore d;
	d.iKnowAllAboutYou_console(comp);
	d.iKnowAllAboutYou_file(comp);
	Curator s;
	s.iCanModify(j);
	j.information();
	Print v;
	v.information();
	Laser l;
	l.information();
	Product* a = new Computer();
	Print_2 r;
	r.iAmPrinting(a);
}


