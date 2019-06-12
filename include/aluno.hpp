#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <iomanip>

#include <string>

#include "discente.hpp"


class Aluno: public Discente{
    private:
        double _matricula;
    public:
        Aluno(std::string nome, 
              std::string cpf, 
              std::string data_nasc, 
              std::string endereco,
              double matricula);
        double get_matricula();
};  
#endif