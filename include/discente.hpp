#ifndef DISCENTE_H
#define DISCENTE_H

#include <iostream>
#include <iomanip>

#include <string>

#include "pessoa.hpp"


class Discente: public Pessoa{
    public:
        Docente(std::string nome, 
                std::string cpf, 
                std::string data_nasc, 
                std::string endereco) : Pessoa(nome, cpf, data_nasc, endereco){};
        virtual double get_matricula() = 0;
};
#endif