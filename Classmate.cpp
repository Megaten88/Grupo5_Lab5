#include "Classmate.h"
#include <string>
using std::string;

Classmate::Classmate(string nombre,string telef, string correo, string clase) : Contact(nombre,telef,correo){
    this->classmet = clase;
}

void Classmate::setClassmet(string clase){
    this->classmet = clase;
}

string Classmate::getClassmet(string clase){
    return classmet;
}
