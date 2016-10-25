#include"Computer.h"
#include<iostream>

using namespace std;

Computer::Computer()
{
	brand = "Asus";
	model = "KL501";
	os = "Windows";
	hard_disk = 1000;
	country = "Тайвань";
}

void Computer::information()
{
	VideoCard a;
	cout<<"\nИнформация о компьютере "<<brand<<" "<<model<<" :";
	cout<<"\nЕмкость жесткого диска: "<<hard_disk;
	cout<<"\nВидеокарта: "<<a.getCapacity();
	cout<<"\nПроизводитель: "<<country;
	prosmatre(a.kol1);
}

void Computer::in()
{
videoCard->infa();
}

void Computer::prosmatre(int vid_card)
{
	if (vid_card==1)
		cout<<"\nКоличество видеокарт: 1\n";

	else 
		cout<<"\nКоличество видеокарт превышает допустимое значение;\n";
}

void Computer::toConsole()
{
cout<<"\n"<<typeid(this).name()<<"\n";
}