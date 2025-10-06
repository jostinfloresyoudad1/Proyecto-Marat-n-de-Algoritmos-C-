#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: número negativo." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << n << " es " << factorial << endl;

    return 0;
}

