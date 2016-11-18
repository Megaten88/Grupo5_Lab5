#include "Partner.h"
#include "Contact.h"
#include <string>
using std::string;

Partner::Partner(string nombre,string telef, string correo, string fecha):Contact(nombre,telef,correo){
	date = fecha;
}
Partner::~Partner(){
	
}