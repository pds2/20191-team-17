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
        Departamento(std::string nome, Professor *professor, double num_alunos){
            _nome = nome;
            _professor = professor;
            _num_alunos = num_alunos;
        }
        std::string get_nome(){
            return _nome;
        };
        Professor *get_professores(){
            return _professor;
        };
        double get_num_alunos(){
            return _num_alunos;
        };
};
#endif