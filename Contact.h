#pragma once
#include <string>
class Contact{
private:
	string name;
	string tel;
	string email;
public:
	void setName(string);
	string getName();
	void setTel();
	string getTel();
	void setEmail();
	string getEmail();
};