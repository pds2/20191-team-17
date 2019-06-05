#include <iostream>
#include <iomanip>


#include "forma.h"
#include "forma2d.h"
#include "forma3d.h"
#include "quadrado.h"
#include "triangulo.h"
#include "cubo.h"
#include "esfera.h"
#include "circulo.h"

#include <string>
#include <math.h>


int main(){
    // Quadrado quadrado("rosa", 2);
    // Forma *poligono1 = &quadrado;
    // std::cout<< poligono1->get_nome()  << std::endl;
    
    Circulo cr("rosa", 2);
    std::cout << cr.get_area() <<std::endl;
    std::cout << cr.get_perimetro() <<std::endl;
    
    return 0;
}