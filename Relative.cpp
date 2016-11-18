#include "Relative.h"
#include "Contact.h"
#include <string>
#include <iostream>

Relative::Relative(string nombre,string telef, string correo, string tipo) : Contact(nombre,telef,correo){
    this->type = tipo;
}

Relative::~Relative(){
    std::cout << "holis" << std::endl;
}

void Relative::setType(string tipo){
    this->type = tipo;
}

string Relative::getType(){
    return type;
}
