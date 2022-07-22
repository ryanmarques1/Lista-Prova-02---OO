#ifndef AJUDANTE_H_INCLUDED
#define AJUDANTE_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "organizador.h"

using namespace std;


class ajudante : public organizador{
    public:
        ajudante();
        ajudante(string&,int,int,int,double,int);
        ajudante(const ajudante&);
        ~ajudante();
        ajudante& operator=(const ajudante&);

        void setAss(int);
        int getAss();

        virtual void imprime_infos();
        virtual double dinheiro_recebido();
    private:
        int assists;
};

#endif // AJUDANTE_H_INCLUDED
