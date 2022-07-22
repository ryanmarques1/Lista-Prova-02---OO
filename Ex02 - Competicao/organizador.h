#ifndef ORGANIZADOR_H_INCLUDED
#define ORGANIZADOR_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "pessoa.h"

class organizador : public pessoa{
    public:
        organizador();
        organizador(string&, int, int, int , double);
        organizador(const organizador&);
        ~organizador();
        organizador& operator=(const organizador&);
        void setHE(int);
        void setQntD(int);
        void setSD(double);
        int getHE();
        int getQntD();
        double getSD();
        virtual void imprime_infos();

    private:
        int horaEntrada,qntDias;
        double salarioDiario;
};

#endif // ORGANIZADOR_H_INCLUDED
