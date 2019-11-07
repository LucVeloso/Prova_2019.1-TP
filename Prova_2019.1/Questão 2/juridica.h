#include <iostream>
#include "pessoa.h"

using namespace std;

class Juridica : public Pessoa{

    private:

        string cnpj;
        string iE;
        string nomeF;

    public: 

        Juridica();
        Juridica(string c, string n, string t, string ce, string cn, string i, string nf);

        bool setCnpj(string c);
        bool setIE(string i);
        bool setNomeF(string nf);

        string getCnpj();
        string getIE();
        string getNomeF();
};