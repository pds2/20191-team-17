#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <iomanip>

#include <string>


class Pessoa{
    
    private: 
        std::string _nome;
        std::string _cpf;
        std::string _data_nasc;
        std::string _endereco;    
    public:
        Pessoa(std::string nome, std::string cpf, std::string data_nasc, std::string endereco){
            _nome = nome;
            _cpf = cpf;
            _data_nasc = data_nasc;
            _endereco = endereco;
        }
        std::string get_nome(){
            return _nome;
        };
        std::string get_cpf(){
            return _cpf;
        };
        std::string get_data_nasc(){
            return _data_nasc;
        };
        std::string get_endereco(){
            return _endereco;
        };
};
#endif
