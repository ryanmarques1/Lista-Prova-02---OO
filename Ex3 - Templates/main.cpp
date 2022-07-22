#include "arrayesp.h"
using namespace std;

int main()
{
    ///Templates(Com coleções)
    ArrayEsp<int> A;

    cout << "Tipo inteiro\n";
    A.insere(1,0);
    A.insere(25,1);
    A.insere(2,2);
    A.imprimeEle();
    cout << ".......................................................................\n";
    A.removE(2);
    A.imprimeEle();
    cout << endl << endl;

    ArrayEsp<double> A2;

    cout << "Tipo double\n";
    A2.insere(25.5,0);
    A2.insere(1.22,1);
    A2.insere(22.5,2);
    A2.insere(31.5,3);
    A2.insere(36.5,4);
    A2.insere(35.5,5);
    A2.imprimeEle();
    cout << ".......................................................................\n";
    A2.removE(2);
    A2.removE(4);
    A2.imprimeEle();
    cout << endl << endl;

    ArrayEsp<char> A3;

    cout << "Tipo char\n";
    A3.insere('r',0);
    A3.insere('y',1);
    A3.insere('a',2);
    A3.insere('n',3);
    A3.insere('-',4);
    A3.insere('m',5);
    A3.insere('d',6);
    A3.insere('c',7);
    A3.imprimeEle();
    cout << ".......................................................................\n";
    A3.removE(5);
    A3.removE(3);
    A3.imprimeEle();
    cout << endl << endl;
    return 0;
}
