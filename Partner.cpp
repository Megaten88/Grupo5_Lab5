#include "Partner.h"
#include "Contact.h"
#include <string>
using std::string;

void Partner::setDate(string fecha){
	date = fecha;
}
Partner::Partner(string nombre,string telef, string correo, string fecha):Contact(nombre,telef,correo){
	Partner::setDate(fecha);
}
Partner::~Partner(){

}
string Partner::getDate(){
	return date;
}