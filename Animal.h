#include <string>
#include "Pata.h"
#include "Pelaje.h"
#include "Ojo.h"
#include "Oreja.h"
#include "Cola.h"

#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

class Animal{
    public:
        Animal();
        Animal(string,string,string,string,Pata*,Pelaje*,Ojo*,Oreja*,Cola*);
        string toString();
        string getNombreAnimal();
        ~Animal();
        string getTipo();
    private:
        string nombreEspecie, nombreAnimal, tamano, tipo;
        Pata* pata;
        Pelaje* pelaje;
        Ojo* ojo;
        Oreja* oreja;
        Cola* cola;

    
};
#endif