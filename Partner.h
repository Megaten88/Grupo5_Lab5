#include "Contact.h"
#include <string>
using std::string;

class Partner:public Contact{
private:
	string date;
public:
	Partner(string,string,string,string);
	~Partner();
	void setDate(string);
	string getDate();
};