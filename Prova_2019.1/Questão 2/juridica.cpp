#include <iostream>
#include "pessoa.h"

using namespace std;

class Juridica : public Pessoa{

    protected:

        string cpf;
        string rg;
        string dNascimento;

    public: 

        Juridica();
        Juridica(string c, string n, string t, string cep);

        bool setCpf(string c);
        bool setRg(string r);
        bool setDNascimento(string dds);

        string getCpf();
        string getRg();
        string getDNascimento();
};