// Condicionais If ... Else
# include <iostream>
using namespace std;

int main(){
    int tempo = 13;
   
    
    // Condicionais
    if (tempo < 12){

        cout << " \n Bom dia!!!. " <<  tempo << "\n ";

    }else if(tempo < 18){
        cout << "\n Boa tarde!!!. " << tempo << "\n";
    } else {
        cout << "Boa noite!!!. " << tempo << "\n";
    }

  
    return 0;
}