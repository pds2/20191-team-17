#include <iostream>
#include <iomanip>

#include "pessoa.hpp"
#include "departamento.hpp"
#include "disciplina.hpp"
#include "professor.hpp"
#include "aluno.hpp"

#include <string>


int main(){
    
    double num_total_prof = 0;
    double num_total_alun = 0;
    double num_total_depa = 0;
    double num_total_disc = 0; 

    std::cout << "----- BEM VINDO -----" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Insira o número de professores a serem cadastrados: ";
    std::cin >> num_total_prof;

    std::cout << "Insira o número de alunos a serem cadastrados: ";
    std::cin >> num_total_alun;

    std::cout << "Insira o número de departamentos a serem cadastrados: ";
    std::cin >> num_total_depa;

    std::cout << "Insira o número de disciplinas a serem cadastradas: ";
    std::cin >> num_total_disc;

    std::string nome = "";
    std::string cpf = "";
    std::string data_nasc = "";
    std::string endereco = "";
    double salario = 0;
    double cart_trab = 0;

    std::vector<Professor> professor;
    professor.reserve(num_total_prof);

    for(int i = 0; i < num_total_prof; i++){

        std::cout << "Professor " << i << ":" << std::endl;

        std::cout << "Nome: ";
        std::cin >> nome;
        std::cout << "" << std::endl;

        std::cout << "CPF: ";
        std::cin >> cpf;
        std::cout << "" << std::endl;

        std::cout << "Data Nascimento: ";
        std::cin >> data_nasc;
        std::cout << "" << std::endl;

        std::cout << "Endereco: ";
        std::cin >> endereco;
        std::cout << "" << std::endl;

        std::cout << "Salario: ";
        std::cin >> salario;
        std::cout << "" << std::endl;

        std::cout << "Carteira de Trabalho: ";
        std::cin >> cart_trab;
        std::cout << "" << std::endl;

        professor.push_back(Professor(nome, cpf, data_nasc, endereco, salario, cart_trab));
    }

    for(int i = 0; i < num_total_prof; i++){

        std::cout << "Professor " << i << ":" << std::endl;

        std::cout << "Nome: " << professor.get_nome() << std::endl;
        std::cout << "CPF: " << professor.get_cpf() << std::endl;
        std::cout << "Data Nascimento: " << professor.get_data_nasc() << std::endl;
        std::cout << "Endereco: " << professor.get_endereco() << std::endl;
        std::cout << "Salario: " << professor.get_salario() << std::endl;
        std::cout << "Carteira de Trabalho: " << professor.get_cart_trab() << std::endl;
    }
    return 0;
}
