#include "Contact.h"
#include <string>
#include <sstream>
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
<<<<<<< HEAD
string Contact::toString(){
	stringstream ss;
	ss<<"Nombre: " << name <<"; Teléfono: "<<tel<<"; Email: " <<email;
	return ss.str();
}
=======
>>>>>>> 7cef80c0a0b25d9fd770fbaf85908385944f5010
