#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <iostream>
#include <iomanip>

#include <string>


class Departamento{
    
    private: 
        std::string _nome;
        double _num_funcionarios;
    public:
        Departamento(std::string nome, double num_funcionarios){
            _nome = nome;
            _num_funcionarios = num_funcionarios;
        }
        std::string get_nome(){
            return _nome;
        };
        double get_num_funcionarios(){
            return _num_funcionarios;
        };
};
#endif