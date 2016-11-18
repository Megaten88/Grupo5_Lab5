#pragma once
#include <string>
using std::string;

class Contact{
protected:
	string name;
	string tel;
	string email;
public:
	Contact(string,string,string);
	~Contact();
	void setName(string);
	string getName();
	void setTel(string);
	string getTel();
	void setEmail(string);
	string getEmail();;
	string toString()
};
