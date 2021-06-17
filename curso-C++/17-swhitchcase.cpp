// comentarios
# include <iostream>
using namespace std;

int main(){
    // Digitando um número da semana
    int diasemana;
    cout << "Digite um numero: ";
    cin >> diasemana;
    // Inicio do Switch
    switch (diasemana)
    {
    case 1:
         cout << " \n Dia da Semanna Domingo:  " <<  diasemana << "\n ";
        break;
    
    case 2:
     cout << " \n Dia da Semanna Segunda:  " <<  diasemana << "\n ";
    break;

    case 3:
     cout << " \n Dia da Semanna Terça:  " <<  diasemana << "\n ";
    break;

    case 4:
     cout << " \n Dia da Semanna Quarta:  " <<  diasemana << "\n ";
    break;

    case 5:
     cout << " \n Dia da Semanna Quarta:  " <<  diasemana << "\n ";
    break;

    case 6:
     cout << " \n Dia da Semanna Sexta:  " <<  diasemana << "\n ";
    break;

    case 7:
     cout << " \n Dia da Semanna Sabádo:  " <<  diasemana << "\n ";
    break;
    
    default:
     cout << " \n Dia Digitado errado:  " <<  diasemana << "\n ";
    break;
    }
   
    return 0;
}