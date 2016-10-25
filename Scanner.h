#include"Equipment.h"

class Scanner : Equipment
{
public:
	int max_form, scan_speed;
	char *connection;
	char *light_source;
	void information();
	virtual void toConsole();
	Scanner();
};