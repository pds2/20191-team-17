#include <iostream>
#include <iomanip>

#include <string>

#include "professor.hpp"


Professor::Professor(std::string nome, 
                     std::string cpf, 
                     std::string data_nasc, 
                     std::string endereco, 
                     double salario,
                     double cart_trab) : Docente(nome, cpf, data_nasc, endereco){
    _salario = salario;
    _cart_trab = cart_trab;
}

double Professor::get_salario(){
    return _salario;
}

double Professor::get_cart_trab(){
    return _cart_trab;
}

