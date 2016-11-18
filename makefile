

Classmate.o: Contact.h Classmate.h Classmate.cpp
	g++ -c Classmate.cpp

WorkPartner.o: Contact.h WorkPartner.h WorkPartner.cpp
	g++ -c WorkPartner.cpp

Partner.o: Contact.h Partner.h Partner.cpp
	g++ -c Partner.cpp

Friend.o:  Contact.h Friend.h Friend.cpp
	g++ -c Friend.cpp

Contact.o: Contact.h Contact.cpp
	g++ -c Contact.cpp