#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <iomanip>

#include <string>

class Pessoa{
    
    private: 
        std::string _nome;
        int _idade;
        std::string _cpf;
        std::string _data_nasc;
        std::string _endereco;    
    public:
        Pessoa(std::string nome, std::string cpf, std::string data_nasc, std::string endereco){
            _nome = nome;
            _cpf = cpf;
            _data_nasc = data_nasc;
            _idade = 1;
            _endereco = endereco;
        }
        std::string get_nome(){
            return _nome;    
        };
        int get_idade(){
            return _idade;
        };
        // TODO resto;
};
#endif