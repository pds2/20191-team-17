#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <iostream>
#include <iomanip>

#include <string>

#include "professor.hpp"


class Departamento{
    
    private: 
        std::string _nome;
        Professor *_professor;
        double _num_professores;
    public:
        Departamento(std::string nome, Professor *professor, double num_professores){
            _nome = nome;
            _professor = professor;
        }
        std::string get_nome(){
            return _nome;
        };
        Professor *get_professores(){
            return _professor;
        };
        double get_num_professores(){
            return _num_professores;
        };
};
#endif