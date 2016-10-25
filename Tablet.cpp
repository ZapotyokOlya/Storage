#include"Tablet.h"
#include<iostream>

using namespace std;

Tablet::Tablet()
{
	brand = "HP";
	model = "T8Y94AW";
	os = "Windows";
	hard_disk = 1000;
	country = "Китай";
	runtime = 8;
}

void Tablet::information()
{
	cout<<"Информация о планшете: "<<brand<<" "<<model<<" :";
	cout<<"\nСтрана изготовитель: "<<country;
	cout<<"\nВремя работы(автономной): "<<runtime<<"\n";
}

void Tablet::toConsole()
{
cout<<"\n"<<typeid(this).name()<<" ";
}