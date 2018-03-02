#include <string>

#ifndef PELAJE_H
#define PELAJE_H

using namespace std;

class Pelaje{
    public:
        Pelaje();
        Pelaje(string,string,string);
        ~Pelaje();
    private:
        string color,grosor,largo;
        
    
};
#endif
