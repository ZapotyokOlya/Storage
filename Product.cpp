#include"Product.h"
#include<iostream>

using namespace std;

Product::Product()
{
	country = "������";
}

int Product::len_str(char *_str)
{
	int i = 0;
	for (; i < 20; )
	{
		if(_str[i] != 0)
			i++;
		else break;
	}
	//cout<<"\n����� ������:\n"<<i;
	return i;
}

void Print_2::iAmPrinting(Product* a)
{
cout<<"\n"<<typeid(this).name()<<" ";
}