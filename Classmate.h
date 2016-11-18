#pragma once
#include "Contact.h"

class Classmate : public Contact {
    protected:
        string classmet;
    public:
        Classmate();
        ~Classmate();
        void setClassmet(string);
        string getClassmet();
}
