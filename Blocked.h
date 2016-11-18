#pragma once
#include "Contact.h"
#include <string>
using std::string;


class Blocked : public Contact{
protected:
    int hateLevel;
public:
    Blocked(string, string, string, int);
    ~Blocked();
    void setHateLevel(int);
    int getHateLevel();
};
