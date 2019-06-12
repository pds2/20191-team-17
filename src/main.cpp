#include <iostream>
#include <iomanip>

#include "pessoa.hpp"
#include "departamento.hpp"
#include "disciplina.hpp"
#include "professor.hpp"
#include "aluno.hpp"

#include <string>
#include <vector>


int main(){
    
    double num_total_prof = 0;
    double num_total_alun = 0;
    double num_total_depa = 0;
    double num_total_disc = 0; 

    std::string nome = "";
    std::string cpf = "";
    std::string data_nasc = "";
    std::string endereco = "";
    std::string semestre = "";
    double matricula = 0;
    double salario = 0;
    double cart_trab = 0;
    double num_alunos = 0;

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

    std::vector<Professor> professores;
    professores.reserve(num_total_prof);

    for(int i = 0; i < num_total_prof; i++){

        std::cout << "Professor " << i+1 << ":" << std::endl;

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

        professores.push_back(Professor(nome, cpf, data_nasc, endereco, salario, cart_trab));
    }

    std::vector<Aluno> alunos;
    alunos.reserve(num_total_alun);

    for(int i = 0; i < num_total_alun; i++){

        std::cout << "Aluno " << i+1 << ":" << std::endl;

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

        std::cout << "Matricula: ";
        std::cin >> matricula;
        std::cout << "" << std::endl;

        alunos.push_back(Aluno(nome, cpf, data_nasc, endereco, matricula));
    }

    std::vector<Disciplina> disciplinas;
    disciplinas.reserve(num_total_disc);

    for(int i = 0; i < num_total_disc; i++){

        std::cout << "Disciplina " << i+1 << ":" << std::endl;

        std::cout << "Nome: ";
        std::cin >> nome;
        std::cout << "" << std::endl;

        std::cout << "Semestre: ";
        std::cin >> semestre;
        std::cout << "" << std::endl;

        std::cout << "Numero de Alunos Matriculados: ";
        std::cin >> num_alunos;
        std::cout << "" << std::endl;

        disciplinas.push_back(Disciplina(nome, semestre, num_alunos));
    }


//    std::cout << std::string(50, '\n');

    for(int i = 0; i < num_total_prof; i++){

        std::cout << "Professor " << i+1 << ":" << std::endl;

        std::cout << "Nome: " << professores[i].get_nome() << std::endl;
        std::cout << "CPF: " << professores[i].get_cpf() << std::endl;
        std::cout << "Data Nascimento: " << professores[i].get_data_nasc() << std::endl;
        std::cout << "Endereco: " << professores[i].get_endereco() << std::endl;
        std::cout << "Salario: " << professores[i].get_salario() << std::endl;
        std::cout << "Carteira de Trabalho: " << professores[i].get_cart_trab() << std::endl;
    }

  //  std::cout << std::string(50, '\n');

    for(int i = 0; i < num_total_alun; i++){

        std::cout << "Aluno " << i+1 << ":" << std::endl;

        std::cout << "Nome: " << alunos[i].get_nome() << std::endl;
        std::cout << "CPF: " << alunos[i].get_cpf() << std::endl;
        std::cout << "Data Nascimento: " << alunos[i].get_data_nasc() << std::endl;
        std::cout << "Endereco: " << alunos[i].get_endereco() << std::endl;
        std::cout << "Matricula: " << alunos[i].get_matricula() << std::endl;
    }

    //std::cout << std::string(50, '\n');

    for(int i = 0; i < num_total_disc; i++){

        std::cout << "Disciplina " << i+1 << ":" << std::endl;

        std::cout << "Nome: " << disciplinas[i].get_nome() << std::endl;
        std::cout << "Semestre: " << disciplinas[i].get_semestre() << std::endl;
        std::cout << "Numero de Alunos: " << disciplinas[i].get_num_alunos() << std::endl;
    }

    return 0;
}
