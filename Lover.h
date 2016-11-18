#pragma once
#include "Contact.h"
#include <string>

using std::string;



class Lover : public Contact{
protected:
    string available;
public:
    Lover(string, string, string, string);
    ~Lover();
    void setAvailable(string);
    string getAvailable();
};
