#include <iostream>
#include <iomanip>

#include "professor.hpp"

//#include <string>
//#include <math.h>

Professor::Professor(std::string nome, std::string cpf, std::string data_nasc, std::string endereco, std::string carteira) : Pessoa(nome, cpf, data_nasc, endereco){
    _carteira = carteira;


}