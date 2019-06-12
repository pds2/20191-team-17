#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <iostream>
#include <iomanip>

#include <string>
#include <vector>

#include "professor.hpp"


class Departamento{
    
    private: 
        std::string _nome;
        std::vector<Professor> professores;
        double _num_professores;
    public:
        Departamento(std::string nome, std::vector<Professor> professores, double num_professores){
            _nome = nome;
            _professores = professores;
            _num_professores = num_professores;
        }
        std::string get_nome(){
            return _nome;
        };
        std::vector<Professor> get_professores(){
            return _professores;
        };
        double get_num_professores(){
            return _num_professores;
        };
};
#endif