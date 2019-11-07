#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool organizar(string a, string b){ return a.size() > b.size();}

int main(){

    vector <string> palavras;

    cout << "Informe três palavras: ";
    for(int i =0; i < 3; i++){

        string ent;

        cin >> ent;
        palavras.push_back(ent);
    }

    sort(palavras.begin(), palavras.end(), organizar);

    if(palavras[0].size() == palavras[1].size() and palavras[1].size() == palavras[2].size()){

        cout << "As palavras tem o mesmo tamanho!" << endl;
    }
    else{

        cout << "Maior palavra: " << palavras[0] << endl;
        cout << "Menor palavra: " << palavras[2] << endl;
    }

    return 0;
}