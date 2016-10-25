#include"Printer.h"
#include<iostream>

using namespace std;

Printer::Printer()
{
	brand = "CANON"; 
	model = "PIXMA_IP8740";
	country = "Китай";
	type = "МФУ";
	str_in_month = 8000;
}

void Printer::information()
{
	cout<<"Информация о принтере: "<<brand<<" "<<model<<":";
	cout<<"\nТип устройства: "<<type;
	cout<<"\nКоличество страниц: "<<str_in_month<<"\n";
}

Print::Print()
{
laser = "лазерная";
inkjet = "струйная";
thermal_inkjet = "термическая_струйная";
}

void Print::information()
{
cout<<"\nТип печати:"<<"\n1. "<<laser;
cout<<"\n2. "<<inkjet<<"\n3. "<<thermal_inkjet<<"\n";
}

Laser::Laser()
{
inkjet = "-";
thermal_inkjet = "-";
}

void Printer::toConsole()
{
cout<<"\n"<<typeid(this).name()<<" ";
}