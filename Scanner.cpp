#include"Scanner.h"
#include<iostream>

using namespace std;

Scanner::Scanner()
{
	brand = "CANON";
	model = "DR-C225W";
	country = "Япония";
	scan_speed = 16;
	light_source = "Планшетный";
	connection = "Wi--fi, USB";
}

void Scanner::information()
{
	cout<<"\nИнформация о сканере: "<<brand<<" "<<model<<":";
	cout<<"\nТип источника света: "<<light_source;
	cout<<"\nСкорость сканирования: "<<scan_speed;
}

void Scanner::toConsole()
{
cout<<"\n"<<typeid(this).name()<<" ";
}