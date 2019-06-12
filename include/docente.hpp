#ifndef DOCENTE_H
#define DOCENTE_H

#include <iostream>
#include <iomanip>

#include "pessoa.hpp"

#include <string>
#include <math.h>

class Docente: public Pessoa{
    public:
        Docente(std::string nome, 
                std::string cpf, 
                std::string data_nasc, 
                std::string endereco) : Pessoa(nome, cpf, data_nasc, endereco){};
        virtual double get_salario() = 0;
        virtual double get_cart_trab() = 0;
};
#endif