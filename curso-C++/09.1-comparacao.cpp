// Operadores
# include <iostream>
using namespace std;

int main(){

    // Operadores Aritimeticos

    int num1 = 1;
    int num2 = 1;

    int igual = num1 == num2; // +
    int diferente = num1 != num2; // -
    int maior = num1 > num2;// - /
    int menor = num1 < num2;  // *
   
    int maiorigual = num1 >= num2;
    int menorigual = num1 <= num2;

    cout << " \n Operadores de Comparação \n";

    cout << " \n Operador de Igual " <<  igual << "\n ";
    cout << " \n Operador de Diferente " <<  diferente << "\n ";
    cout << " \n Operador de Maior " <<  maior << "\n ";
    cout << " \n Operador de Menor " <<  menor << "\n ";

    cout << " \n Operador de Maior ou Igual " <<  maiorigual << "\n ";
    cout << " \n Operador de Menor ou Igual " <<  menorigual << "\n ";
   

    return 0;
}