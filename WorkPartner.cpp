#include <string>
#include "WorkPartner.h"
#include "Contact.h"
using std::string;
WorkPartner::WorkPartner(string nombre, string tele, string correo, string trabajo): Contact(nombre,tele,correo){
	department = trabajo;
}
WorkPartner::~WorkPartner(){

}