// comentarios
# include <iostream>
using namespace std;

void swapMemoria(int &x, int &y){

    int z =  x;

    x = y;
    y = z;

}

int main(){

    int numeroUm = 10;
    int numeroDois = 20;


    //string templates = "template";
    cout << " \n Antes do swap: " << "\n ";
    cout << numeroUm << numeroDois << "\n ";


    swapMemoria(numeroUm, numeroDois);
    cout << " \n Depois do swap: " << "\n ";
    cout << numeroUm << numeroDois << "\n ";




    return 0;
}