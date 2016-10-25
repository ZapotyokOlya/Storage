#ifndef PRODUCT_H    // если имя  ещё не определено
#define PRODUCT_H // определить имя 
class Product
{
public:
	char* country, *brand;
	static const int msize = 7;
	int amount, price;
	void brand_initial();
	virtual void information()=0;
	virtual void toConsole()=0;
	int len_str(char*);
	Product();
	int getPrice()
	{
		return price;
	}
	void setPrice(int price_)
	{
		price=price_;
	}
};

class Print_2
{
public:
	void iAmPrinting( Product*someobj);
	
};

#endif PRODUCT_H // если  имя  уже определено, повторно не определять