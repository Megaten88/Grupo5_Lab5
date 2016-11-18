#pragma once
#include "Contact.h"
#include <string>
using std::string;
class Friend:public Contact{
private:
	int flevel;
public:
	Friend(string,string,string, int);
	~Friend();
	void setFlevel(int);
	int getFlevel();
};