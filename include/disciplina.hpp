#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <iostream>
#include <iomanip>

#include <string>

class Disciplina{
    
    private: 
        std::string _nome;
        std::string _semestre;
        double _num_alunos;
    public:
        Disciplina(std::string nome, std::string semestre, double num_alunos){
            _nome = nome;
            _semestre = semestre;
            _num_alunos = num_alunos;
        }
        std::string get_nome(){
            return _nome;
        };
        std::string get_semestre(){
            return _semestre;
        };
        double get_num_alunos(){
            return _num_alunos;
        };
};