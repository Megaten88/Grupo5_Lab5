#pragma once
#include <string>
class Contact{
protected:
	string name;
	string tel;
	string email;
public:
	void setName(string);
	string getName();
	void setTel(string);
	string getTel();
	void setEmail(string);
	string getEmail();
};