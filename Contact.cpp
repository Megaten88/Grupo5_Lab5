#include "Contact.h"
#include <string>

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
string getEmail(){
	return email;
}