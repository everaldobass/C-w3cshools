// Operadores
# include <iostream>
using namespace std;

int main(){

    // Operadores Aritimeticos

    int num1 = 10;
    int num2 = 2;

    int soma = num1 + num2; // +
    int subtracao = num1 - num2; // -
    int divisao = num1 / num2;// - /
    int multiplicacao = num1 * num2;  // *
    int modulos = num1 % num2;
    int incremento = ++num1;
    int decremento = --num1;

    cout << " \n Operadores Aritiméticos \n";

    cout << " \n Operador de Soma " <<  soma << "\n ";
    cout << " \n Operador de Subtraçao " <<  subtracao << "\n ";
    cout << " \n Operador de multiplicação " <<  multiplicacao << "\n ";
    cout << " \n Operador de Divisão " <<  divisao << "\n ";

    cout << " \n Operador de Modulos " <<  modulos << "\n ";
    cout << " \n Operador de Incremento " <<  incremento << "\n ";
    cout << " \n Operador de Decremento " <<  decremento << "\n ";




    return 0;
}