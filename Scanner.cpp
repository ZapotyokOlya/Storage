#include"Scanner.h"
#include<iostream>

using namespace std;

Scanner::Scanner()
{
	brand = "CANON";
	model = "DR-C225W";
	country = "������";
	scan_speed = 16;
	light_source = "����������";
	connection = "Wi--fi, USB";
}

void Scanner::information()
{
	cout<<"\n���������� � �������: "<<brand<<" "<<model<<":";
	cout<<"\n��� ��������� �����: "<<light_source;
	cout<<"\n�������� ������������: "<<scan_speed;
}

void Scanner::toConsole()
{
cout<<"\n"<<typeid(this).name()<<" ";
}