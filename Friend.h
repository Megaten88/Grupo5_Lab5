#pragma once
#include "Contact.h"
class Friend:public Contact{
private:
	int flevel;
public:
	void setFlevel(int);
	int getFlevel();
};