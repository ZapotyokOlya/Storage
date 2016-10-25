#include"Equipment.h"
#include<iostream>
#ifndef COMPUTER_H    // если имя  ещё не определено
#define COMPUTER_H // определить имя 

using namespace std;

class Computer : public Equipment
{
	
	//char *os;
public:
	class VideoCard
	{
		char *video;
		int kol;
	public:
		int kol1;
		VideoCard ()
		{
			video = new char();
		cout<<"\nВидеокарта: ";
	cin>>video;
	for (int i = len_str(video); i > msize-1; i --)
	{
		video[i] = '\0';
	}
	cout<<"Количество: ";
	cin>>this->kol1;
		}

		void setCapacity(char *_video)
		{
			video = _video;
		}

		char getCapacity()
		{
		return *video;
		}

		int len_str(char *_str)
{
	int i = 0;
	for (; i < 20; )
	{
		if(_str[i] != 0)
			i++;
		else break;
	}
	return i;
}
		int getKol()
		{
		return kol;
		}
		void setKol()
		{
			 this->kol = kol;
		}
		void infa()
		{
			Computer a;
			a.information();
		}
	};
		float year_os;
	void in();
	VideoCard* videoCard;
	int num_of_cores, hard_disk;
	char *os;
	void information();
	Computer();
	 void prosmatre(int y);
	void setOs(char* _os)
	{
	os = _os;
	}
	char getOs() const
	{
	return *os;
	}
	void setOs_y(float _os)
	{
	year_os = _os;
	}
	float getOs_y() const
	{
	return year_os;
	}
	
	virtual void toConsole();
};

#endif COMPUTER_H // если  имя  уже определено, повторно не определять