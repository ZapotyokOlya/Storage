#include"Tablet.h"
#include<iostream>

using namespace std;

Tablet::Tablet()
{
	brand = "HP";
	model = "T8Y94AW";
	os = "Windows";
	hard_disk = 1000;
	country = "�����";
	runtime = 8;
}

void Tablet::information()
{
	cout<<"���������� � ��������: "<<brand<<" "<<model<<" :";
	cout<<"\n������ ������������: "<<country;
	cout<<"\n����� ������(����������): "<<runtime<<"\n";
}

void Tablet::toConsole()
{
cout<<"\n"<<typeid(this).name()<<" ";
}