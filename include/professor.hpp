#ifndef PROFESSOR_H
#define PROFESSOR_H

//#include <iostream>
//#include <iomanip>

//#include <string>

#include "pessoa.hpp"



class Professor: public Pessoa{
// TODO
// teste
    private:
        std::string _carteira;
    public:
        Professor(std::string carteira);
        ~Professor();


};

#endif