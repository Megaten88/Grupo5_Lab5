
#include "Classmate.h"
#include <string>
#include <iostream>
using std::string;
using std::string;
using std::string;


Classmate::Classmate(string nombre,string telef, string correo, string clase) : Contact(nombre,telef,correo){
    this->classmet = clase;
}

Classmate::~Classmate() {
    //delete
    std::cout << "asd" << std::endl;
}


void Classmate::setClassmet(string clase){
    this->classmet = clase;
}

string Classmate::getClassmet(){
    return classmet;
}
