#ifndef DOCENTE_H
#define DOCENTE_H

#include <iostream>
#include <iomanip>

#include "pessoa.hpp"

#include <string>
#include <math.h>

class Docente: public Pessoa{
    public:
        Docente(std::string cor, std::string nome) : Pessoa(cor, nome){};
        virtual double get_area() = 0;
        virtual double get_perimetro() = 0;
};
#endif