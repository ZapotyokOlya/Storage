#include"Equipment.h"
#include<iostream>

using namespace std;

int Equipment :: objectCounter = 0;

Equipment::Equipment()
{

	model = "jt902 ";
	objectCounter++;
}

void Equipment :: printObjectCounter()
{
	cout<<"���������� ��������: "<<objectCounter<<"\n";
}

void Equipment::toConsole()
{
cout<<"\n"<<typeid(this).name()<<" ";
}

void Equipment::information()
{
cout<<"\nEquipment";
}