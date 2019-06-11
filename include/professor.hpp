#ifndef PROFESSOR_H
#define PROFESSOR_H

//#include <iostream>
//#include <iomanip>

//#include <string>

#include "docente.hpp"



class Professor: public Docente{
// TODO
// teste
    private:
        std::string _carteira_trab;
    public:
        Professor(std::string carteira_trab);
        ~Professor();


};

#endif