#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3, promedio;

    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}
