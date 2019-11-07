#include <iostream>
#include <map>
using namespace std;

int main() {
map<string,string> telefones;
string teste;
string nome;
string tel;
do{
cout<<"digite o nome: ";
cin>>nome;
telefones[nome];
cout<<"digite o telefone: ";
cin>>telefones[nome];
cout<<"digite sair para encerrar : ";
cin>>teste;
}while(teste!="sair");
for(auto it : telefones){
   cout<<it.first<<" - "<<it.second<<endl;
return 0;
}
}