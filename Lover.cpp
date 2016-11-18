#include "Lover.h"
#include "Contact.h"
#include <string>
#include <iostream>

Lover::Lover(string nombre,string telef, string correo, string disponible) : Contact(nombre,telef,correo){
    this->available = disponible;
}

Lover::~Lover(){
    std::cout << "holis" << std::endl;
}

void Lover::setAvailable(string tipo){
    this->available = tipo;
}

string Lover::getAvailable(){
    return available;
}
