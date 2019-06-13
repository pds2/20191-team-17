#ifndef DISCENTE_H
#define DISCENTE_H

/**
*
*@brief Class Discente
*@file discente.hpp
*@author Ricardo, Igor e Victor
*@version 1.0
*
*/


#include <iostream>
#include <iomanip>

#include <string>

#include "pessoa.hpp"


class Discente: public Pessoa{
    public:
        Discente(std::string nome, 
                std::string cpf, 
                std::string data_nasc, 
                std::string endereco) : Pessoa(nome, cpf, data_nasc, endereco){};
        virtual double get_matricula() = 0;
};
#endif