#ifndef DOCENTE_H
#define DOCENTE_H

/**
*
*@brief Class Docente
*@file docente.hpp
*@author Ricardo, Igor e Victor
*@version 1.0
*
*/

#include <iostream>
#include <iomanip>

#include <string>

#include "pessoa.hpp"


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