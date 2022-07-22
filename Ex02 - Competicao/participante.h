#ifndef PARTICIPANTE_H_INCLUDED
#define PARTICIPANTE_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "pessoa.h"

class participante : public pessoa{
    public:
        participante();
        participante(string&, int,double);
        participante(const participante&);
        ~participante();
        participante& operator=(const participante&);

        void setPremioP(double);
        double getPremioP();

        virtual void imprime_infos();

    private:
        double premioParti;
};
#endif // PARTICIPANTE_H_INCLUDED
