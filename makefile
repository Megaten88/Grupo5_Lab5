main: main.o  Contact.o Blocked.o Relative.o Lover.o Classmate.o WorkPartner.o Partner.o Friend.o
	g++ main.o  Contact.o Blocked.o Relative.o Lover.o Classmate.o WorkPartner.o Partner.o Friend.o -o main

main.o: main.cpp Contact.h Blocked.h Relative.h Lover.h Classmate.h WorkPartner.h Partner.h Friend.h
	g++ -c main.cpp

Blocked.o: Contact.h Blocked.h Blocked.cpp
	g++ -c Blocked.cpp

Relative.o: Contact.h Relative.h Relative.cpp
	g++ -c Relative.cpp

Lover.o : Contact.h Lover.h Lover.cpp
	g++ -c Lover.cpp

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