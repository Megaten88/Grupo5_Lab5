#pragma once
#include "Contact.h"
#include <string>
using std::string;


class Relative : public Contact {
protected:
    string type;
public:
    Relative(string, string, string, string);
    ~Relative();
    void setType(string);
    string getType();
};
