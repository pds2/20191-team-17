#include <iostream>
#include <iomanip>

#include <string>

#include "aluno.hpp"


Aluno::Aluno(std::string nome, 
             std::string cpf, 
             std::string data_nasc, 
             std::string endereco,
             double matricula) : Discente(nome, cpf, data_nasc, endereco){
    _matricula = matricula;
}

double Aluno::get_matricula(){
    return _matricula;
}