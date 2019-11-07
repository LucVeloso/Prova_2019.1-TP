#include <iostream>
#include "pessoa.h"

using namespace std;

class Fisica : public Pessoa{

    private:

        string cpf;
        string rg;
        string dNascimento;

    public: 

        Fisica();
        Fisica(string c, string n, string t, string ce, string cp, string r, string dds);

        bool setCpf(string c);
        bool setRg(string r);
        bool setDNascimento(string dds);

        string getCpf();
        string getRg();
        string getDNascimento();
};