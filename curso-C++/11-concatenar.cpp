// comentarios
# include <iostream>
using namespace std;

int main(){

    string nome;
    cout << "\n Digite seu nome: ";
    cin >> nome;
   

    string sobrenome;
    cout << "\n Digite o Sobrenome: ";
    cin >> sobrenome;

    string nomeSobrenome = nome + " " +  sobrenome;
    cout << " \n Nome completo: " <<  nomeSobrenome << "\n ";

    return 0;
}