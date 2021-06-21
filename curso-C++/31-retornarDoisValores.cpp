// comentarios
# include <iostream>
using namespace std;

//Definindo função com dois valores
int funRetornaValores(int x, int y){
    
    // Retorna o valor de X e Y
    return x + y;

}

int main(){

    //Chamando o valor da função 
    cout << " \n Retornar Valores: " <<  funRetornaValores(3, 5) << "\n ";
    return 0;
}