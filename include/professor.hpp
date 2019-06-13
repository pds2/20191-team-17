#ifndef PROFESSOR_H
#define PROFESSOR_H

/**
*
*@brief Class Professor
*@file professor.hpp
*@author Ricardo, Igor e Victor
*@version 1.0
*
*/

#include <iostream>
#include <iomanip>

#include <string>

#include "docente.hpp"


class Professor: public Docente{
    private:
        double _salario;
        double _cart_trab;
    public:
        Professor(std::string nome, 
                  std::string cpf, 
                  std::string data_nasc, 
                  std::string endereco, 
                  double salario,
                  double cart_trab);
        double get_salario();
        double get_cart_trab();
};  
#endif