#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <iomanip>

#include <string>

#include "discente.hpp"


class Aluno: public Discente{
    private:
        double _matricula;
    public:
        Aluno(double matricula);
        double get_matricula();
};  
#endif