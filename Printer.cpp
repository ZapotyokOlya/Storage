#include"Printer.h"
#include<iostream>

using namespace std;

Printer::Printer()
{
	brand = "CANON"; 
	model = "PIXMA_IP8740";
	country = "�����";
	type = "���";
	str_in_month = 8000;
}

void Printer::information()
{
	cout<<"���������� � ��������: "<<brand<<" "<<model<<":";
	cout<<"\n��� ����������: "<<type;
	cout<<"\n���������� �������: "<<str_in_month<<"\n";
}

Print::Print()
{
laser = "��������";
inkjet = "��������";
thermal_inkjet = "�����������_��������";
}

void Print::information()
{
cout<<"\n��� ������:"<<"\n1. "<<laser;
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