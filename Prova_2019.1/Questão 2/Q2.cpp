#include <iostream>
#include <vector>
#include <fstream>
#include "pessoa.h"
#include "fisica.h"
#include "juridica.h"

using namespace std;

void cadF(vector<Fisica>& f){

    Fisica temp;
    string c, n ,t, ce;
    string cp, r, dds;

    cout << "Infome o código: ";
    cin >> c;

    while(temp.setCodigo(c)){
        
        cout << "Código inválido! Digite novamente: ";
        cin >> c;
    }

    cout << "Infome o nome: ";
    cin >> n;

    while(temp.setNome(n)){
        
        cout << "Nome inválido! Digite novamente: ";
        cin >> n;
    }

    cout << "Infome o telefone: ";
    cin >> t;

    while(temp.setTelefone(t)){
        
        cout << "Telefone inválido! Digite novamente: ";
        cin >> t;
    }

    cout << "Infome o CEP: ";
    cin >> ce;

    while(temp.setCep(ce)){
        
        cout << "CEP inválido! Digite novamente: ";
        cin >> ce;
    }

    ///////////////////////////////////////////////////////////////////////////

    cout << "Infome o CPF: ";
    cin >> cp;

    while(temp.setCpf(cp)){
        
        cout << "CPF inválido! Digite novamente: ";
        cin >> cp;
    }

    cout << "Infome o RG: ";
    cin >> r;

    while(temp.setRg(r)){
        
        cout << "RG inválido! Digite novamente: ";
        cin >> r;
    }

    cout << "Infome a data de nascimento: ";
    cin >> dds;

    while(temp.setDNascimento(dds)){
        
        cout << "Data de nascimento inválida! Digite novamente: ";
        cin >> dds;
    }

    f.push_back(temp);
}

void cadJ(vector<Juridica>& j){

    Juridica temp;
    string c, n ,t, ce;
    string cn, i, nf;

    cout << "Infome o código: ";
    cin >> c;

    while(temp.setCodigo(c)){
        
        cout << "Código inválido! Digite novamente: ";
        cin >> c;
    }

    cout << "Infome o nome: ";
    cin >> n;

    while(temp.setNome(n)){
        
        cout << "Nome inválido! Digite novamente: ";
        cin >> n;
    }

    cout << "Infome o telefone: ";
    cin >> t;

    while(temp.setTelefone(t)){
        
        cout << "Telefone inválido! Digite novamente: ";
        cin >> t;
    }

    cout << "Infome o CEP: ";
    cin >> ce;

    while(temp.setCep(ce)){
        
        cout << "CEP inválido! Digite novamente: ";
        cin >> ce;
    }

    ///////////////////////////////////////////////////////////////////////////

    cout << "Infome o CNPJ: ";
    cin >> cn;

    while(temp.setCnpj(cn)){
        
        cout << "CNPJ inválido! Digite novamente: ";
        cin >> cn;
    }

    cout << "Infome a Inscrição Estadual: ";
    cin >> i;

    while(temp.setIE(i)){
        
        cout << "Inscrição Estadual inválida! Digite novamente: ";
        cin >> i;
    }

    cout << "Infome o nome fantasia: ";
    cin >> nf;

    while(temp.setNomeF(nf)){
        
        cout << "Nome fantasia inválido! Digite novamente: ";
        cin >> nf;
    }

    j.push_back(temp);
}

void menu(vector<Fisica>& pf, vector<Juridica>& pj){

    int resp;

    while(resp != 0){

        string c, n ,t, ce;
        string cp, r, dds;
        string cn, i, nf;

        cout << "Cadastro" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Pessoa Física" << endl;
        cout << "2 - Pessoa Jurídica" << endl;
        cin >> resp;

        while(resp < 0 or resp > 2){

            cout << "Operação inválida! Tente novamente: ";
            cin >> resp;
        }

        if(resp == 0) break;

        if(resp == 1) cadF(pf);

        if(resp == 2) cadJ(pj);
    }
}

int main(){

    vector<Fisica> pf;
    vector<Juridica> pj;

    menu(pf, pj);

    ofstream fis;
    ofstream jur;

    fis.open("pessoa_fisica.txt");
    jur.open("pessoa_juridica.txt");

    for(auto show : pf){

        fis << "\nCodigo: " << show.getCodigo() << endl;
        fis << "Nome: " << show.getNome() << endl;
        fis << "Telefone: " << show.getTelefone() << endl;
        fis << "CEP: " << show.getCep() << endl;
        fis << "CPF: " << show.getCpf() << endl;
        fis << "RG: " << show.getRg() << endl;
        fis << "Data de nascimento: " << show.getDNascimento() << endl;
    }


    fis.close();
    jur.close();

    return 0;
}