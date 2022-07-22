#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "juiz.h"
#include "ajudante.h"
#include "competidor.h"
#include "tecnico.h"
using namespace std;

int main()
{


    pessoa *p[4];
    string a = "Ryan"; //Juiz
    string b = "Naiara"; //Ajudante;
    string c = "Amanda"; //competidora;
    string c2 = "Cruzeiro"; //competidora;
    string d = "Tiradentes"; //tecnico;

    juiz j(a,15,22,10,600.5,5);
    p[0] = &j;
    ajudante ad(b,18,17,20,300,8);
    p[1] = &ad;
    competidor co(c,10,100,c2,1);
    p[2] = &co;
    tecnico t(d,20,150,1);
    p[3] = &t;
    cout << "\t\t---[INFORMACOES]---";
    cout << endl << endl;
    p[0]->imprime_infos();
    cout << "--------------------\n";
    p[1]->imprime_infos();
    cout << "--------------------\n";
    p[2]->imprime_infos();
    cout << "--------------------\n";
    p[3]->imprime_infos();
    ///Livre para outros teste Pena!
    return 0;
}
