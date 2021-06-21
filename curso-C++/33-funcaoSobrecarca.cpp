// comentarios
# include <iostream>
using namespace std;

int funIntPlus(int x, int y){
    return x + y;
}

double funDoublePlus(double x, double y){
    return x + y;
}

int main(){

    int funInteiro = funIntPlus(8, 5);
    double funDouble = funDoublePlus(4.3, 6.26);

    
    cout << " \n Função Inteira: " <<  funInteiro << "\n ";
    cout << " \n Função Double: " <<  funDouble << "\n ";
    return 0;
}