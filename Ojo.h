#include <string>

#ifndef OJO_H
#define OJO_H

using namespace std;

class Ojo{
    public:
        Ojo();
        Ojo(string,bool);
        ~Ojo();
    private:
        string color;
        bool visionNocturna;
        
    
};
#endif
