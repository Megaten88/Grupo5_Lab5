#pragma once
#include "Contact.h"
#include <string>
using std::string;


class Classmate : public Contact {
    protected:
        string classmet;
    public:
        Classmate(string ,string , string , string );
        ~Classmate();
        void setClassmet(string);
        string getClassmet();
};
