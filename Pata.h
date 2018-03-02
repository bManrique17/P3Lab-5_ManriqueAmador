#include <string>

#ifndef PATA_H
#define PATA_H

using namespace std;

class Pata{
    public:
        Pata();
        Pata(string,string,string);
        ~Pata();
    private:
        string cantidad,largo,tipo;
        
    
};
#endif
