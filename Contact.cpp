#include "Contact.h"
#include <string>
#include <sstream>

using std::stringstream;
using std::string;
Contact::Contact(string nombre, string tele, string correo){
	name = nombre;
	tel = tele;
	email = correo;
}
Contact::~Contact(){

}
void Contact::setName(string nombre){
	name = nombre;
}
string Contact::getName(){
	return name;
}
void Contact::setTel(string telephone){
	tel = telephone;
}
string Contact::getTel(){
	return tel;
}
void Contact::setEmail(string correo){
	email = correo;
}
string Contact::getEmail(){
	return email;
}

string Contact::toString(){
	stringstream ss;
	ss<<"Nombre: " << name <<"; Teléfono: "<<tel<<"; Email: " <<email;
	return ss.str();

}
