// Criação de ponteiros
# include <iostream>
using namespace std;

int main(){

    string food = "Pizza";
    string* ptr = &food;

    cout << " \n Food " <<  food << "\n ";
    cout << " \n &Food " <<  &food << "\n ";
    cout << " \n ptr " <<  ptr << "\n ";

    return 0;
    
}