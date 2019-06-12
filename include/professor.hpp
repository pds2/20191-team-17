#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <iomanip>

#include <string>

#include "docente.hpp"


class Professor: public Docente{
    private:
        double _salario;
        double _cart_trab;
    public:
        Professor(double salario, double cart_trab);
        double get_salario();
        double get_cart_trab();
};  
#endif