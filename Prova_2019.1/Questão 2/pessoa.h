#include <iostream>
#include <vector>

using namespace std;

class Pessoa{

    protected:

        string codigo;
        string nome;
        string telefone;
        string cep;

    public: 

        Pessoa();

        bool setCodigo(string c);
        bool setNome(string n);
        bool setTelefone(string t);
        bool setCep(string ce);

        string getCodigo();
        string getNome();
        string getTelefone();
        string getCep();
};