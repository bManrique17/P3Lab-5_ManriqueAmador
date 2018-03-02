#include <string>
#include <vector>
#include "Animal.h"

#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H

using namespace std;

class Zoologico{
    public:
        Zoologico();
        Zoologico(string,string,string);
        
        string toString();
        void agregarArticos(Animal*);
        void agregarDeserticos(Animal*);
        void agregarJungleros(Animal*);
        void agregarSabaneros(Animal*);

        vector<Animal*> getListaArticos();
        vector<Animal*> getListaDeserticos();
        vector<Animal*> getListaJungleros();
        vector<Animal*> getListaSabaneros();

        ~Zoologico();
    private:
        string nombre, tamano, capacidadPersonas;
        vector <Animal*> listaArticos;
        vector <Animal*> listaDeserticos;
        vector <Animal*> listaJungleros;
        vector <Animal*> listaSabaneros;


    
};
#endif