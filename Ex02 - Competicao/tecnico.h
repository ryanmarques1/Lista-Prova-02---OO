#ifndef TECNICO_H_INCLUDED
#define TECNICO_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "participante.h"

using namespace std;

class tecnico : public participante{
    public:
        tecnico();
        tecnico(string&, int, double, int);
        tecnico(const tecnico&);
        ~tecnico();
        tecnico& operator=(const tecnico&);

        void setNumEq(int);
        int getNumEq();

        virtual void imprime_infos();
        virtual double dinheiro_recebido();
    private:
        int numEq;
};

#endif // TECNICO_H_INCLUDED
