#pragma once
#include "Contact.h"
#pragma once
#include "Contact.h"
#include <string>
using std::string;
class WorkPartner:public Contact{
private:
	string department;
public:
	WorkPartner(string,string,string,string);
	~WorkPartner();	
};