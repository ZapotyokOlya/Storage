#include"Computer.h"
#include<iostream>

using namespace std;

Computer::Computer()
{
	brand = "Asus";
	model = "KL501";
	os = "Windows";
	hard_disk = 1000;
	country = "�������";
}

void Computer::information()
{
	VideoCard a;
	cout<<"\n���������� � ���������� "<<brand<<" "<<model<<" :";
	cout<<"\n������� �������� �����: "<<hard_disk;
	cout<<"\n����������: "<<a.getCapacity();
	cout<<"\n�������������: "<<country;
	prosmatre(a.kol1);
}

void Computer::in()
{
videoCard->infa();
}

void Computer::prosmatre(int vid_card)
{
	if (vid_card==1)
		cout<<"\n���������� ���������: 1\n";

	else 
		cout<<"\n���������� ��������� ��������� ���������� ��������;\n";
}

void Computer::toConsole()
{
cout<<"\n"<<typeid(this).name()<<"\n";
}