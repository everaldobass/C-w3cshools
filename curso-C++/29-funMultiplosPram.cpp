// comentarios
# include <iostream>
using namespace std;


void funMultParam(string nome, int idade){

    cout << " \n Nome " <<  nome << " \n Idade " << idade << "\n " ; 
    //cout << " \n Idade " << idade << "\n ";

}



int main(){

    funMultParam("Everaldo", 40 );
    funMultParam("Edson", 31 );
    funMultParam("Eduardo", 34 );
    funMultParam("Elias", 28 );
    funMultParam("Eriberto", 30 );

    return 0;
}