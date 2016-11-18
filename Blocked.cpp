#include "Blocked.h"
#include "Contact.h"
#include <string>
#include <iostream>

using std::string;

void Blocked::setHateLevel(int nivel){
    if (nivel>= 0 && nivel<= 100){
        this->hateLevel = nivel;
	}else{
        this->hateLevel = nivel;
	}

}

Blocked::Blocked(string nombre,string telef, string correo, int nivel) : Contact(nombre,telef,correo){
    this->hateLevel = nivel;
}

Blocked::~Blocked(){
    std::cout << "holis" << std::endl;
}


int Blocked::getHateLevel(){
    return hateLevel;
}
