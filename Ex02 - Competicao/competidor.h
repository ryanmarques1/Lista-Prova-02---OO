#ifndef COMPETIDOR_H_INCLUDED
#define COMPETIDOR_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "participante.h"

using namespace std;

class competidor : public participante {
    public:
        competidor();
        competidor(string&, int, double, string&, int);
        competidor(const competidor&);
        ~competidor();
        competidor& operator=(const competidor&);

        void setNomeEq(string&);
        void setColoc(int);
        string& getNomeEq();
        int getColoc();

        virtual void imprime_infos();
        virtual double dinheiro_recebido();
    private:
        string nomeEq;
        int colocacao;
};

#endif // COMPETIDOR_H_INCLUDED
