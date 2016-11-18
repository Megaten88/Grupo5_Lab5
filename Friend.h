#pragma once
#include "Contact.h"
class Friend:public Contact{
private:
	int flevel;
public:
	Friend();
	~Friend();
	void setFlevel(int);
	int getFlevel();
};