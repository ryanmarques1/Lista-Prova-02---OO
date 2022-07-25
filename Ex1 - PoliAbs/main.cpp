#include <bits/stdc++.h>
#include "formabasica.h"
#include "circulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "triangulo.h"
using namespace std;

int main()
{

    cout << fixed << setprecision(2);
    circulo c1(100,120,3,2,1,30);
    c1.imprime();
    //cout << "Area = " << c1.area_circulo() << endl;
    cout << endl;
    retangulo r1(40,50,1,1,2,80,30);
    r1.imprime();
    //cout << "Area = " << r1.area_retangulo() << endl;
    cout << endl;
    circulo c2 = c1;
    c2.setX(25);
    c2.setY(17);
    c2.setRaio(25);
    c2.setEspC(9);
    c2.imprime();
    //cout << "Area = " << c2.area_circulo() << endl;
    cout << endl;
    retangulo r2;
    r2 = r1;
    r2.imprime();

    cout << "\n-----------Polimorfismo e Classe Abstrata-----------\n" << endl;
    formabasica *formP[4];
    circulo *circP;
    retangulo *retanP;
    circP = &c1;
    retanP = &r1;
    circP->imprime();
    retanP->imprime();
    //---------
    formP[0] = new circulo(26,18,5,9,5,15);
    formP[1] = new retangulo(25,50,12,12,13,11.2,5.5);
    formP[2] = new quadrado(30.5,21,5,4,1,10,8,9);
    formP[3] = new triangulo(50,15,2,3,4,5,10);
    for(int i = 0; i < 4; i++){
        cout << endl;
        formP[i]->imprime();
        cout << "Area: " << formP[i]->arearc() << endl;
    }
    for(int i = 0; i < 4 ; i++)
        delete formP[i];
    return 0;
}
