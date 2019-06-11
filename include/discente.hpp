#ifndef DISCENTE_H
#define DISCENTE_H

#include <iostream>
#include <iomanip>

#include "pessoa.hpp"

#include <string>
#include <math.h>

class Discente: public Pessoa{
    public:
        Discente(std::string cor, std::string nome) : Pessoa(cor, nome){};
        virtual double get_area() = 0;
        virtual double get_perimetro() = 0;
};
#endif