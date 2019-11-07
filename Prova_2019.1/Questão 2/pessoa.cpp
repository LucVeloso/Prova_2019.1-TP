#include <iostream>

using namespace std;

class Pessoa{

    protected:

        string codigo;
        string nome;
        string telefone;
        string cep;

    public: 

        Pessoa();
        Pessoa(string c, string n, string t, string cep);

        bool setCodigo(string c);
        bool setNome(string n);
        bool setTelefone(string t);
        bool setCep(string cep);

        string getCodigo();
        string getNome();
        string getTelefone();
        string getCep();
};