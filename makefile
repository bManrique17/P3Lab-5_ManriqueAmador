temp:	mainLab6.o Zoologico.o Animal.o Pata.o Pelaje.o Ojo.o Oreja.o Cola.o
	g++ mainLab6.o Zoologico.o Animal.o Pata.o Pelaje.o Ojo.o Oreja.o Cola.o

mainLab6.o:	mainLab6.cpp Zoologico.h Animal.h Pata.h Pelaje.h Ojo.h Oreja.h Cola.h
	g++ -c mainLab6.cpp

Zoologico.o:	Zoologico.h Zoologico.cpp Animal.h
	g++ -c Zoologico.cpp

Animal.o:	Animal.h Animal.cpp Pata.h Pelaje.h Ojo.h Oreja.h Cola.h
	g++ -c Animal.cpp

Pata.o:		Pata.h Pata.cpp
	g++ -c Pata.cpp

Pelaje.o:	Pelaje.h Pelaje.cpp
	g++ -c Pelaje.cpp

Ojo.o:		Ojo.h Ojo.cpp
	g++ -c Ojo.cpp

Oreja.o:	Oreja.h Oreja.cpp
	g++ -c Oreja.cpp

Cola.o:		Cola.h Cola.cpp
	g++ -c Cola.cpp


