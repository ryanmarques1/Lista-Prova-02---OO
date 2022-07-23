#include "arrayesp.h"
using namespace std;

int main()
{
    ///Tratamento de exceções
    ArrayEsp<int> A;

    cout << "Tipo inteiro\n";
    try{
        A.insere(1,0);
        A.insere(25,1);
        A.insere(2,2);
        A.insere(56,2);
    }catch(posi_ocupada& e){
        cout << "Erro -> 1: " << e.what() << endl;
    }
    try{
        A.insere(5,3);
        A.insere(6,7);
        A.insere(3,11);

    }catch(posi_invalida& f){
        cout << "Erro -> 2: " << f.what() << endl;
    }
    try{

        A.removE(8);

    }catch(posi_invalida& g){
        cout << "Erro -> 3: " << g.what() << endl;
    }
    try{
        A.removE(0);
        A.removE(0);
    }catch(posi_liberada& e){
        cout << "Erro -> 4: " << e.what() << endl;
    }
    cout << endl;
    return 0;
}
