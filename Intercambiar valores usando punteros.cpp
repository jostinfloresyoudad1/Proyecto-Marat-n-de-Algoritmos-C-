#include <iostream>
using namespace std;

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Ingresa el primer número: ";
    cin >> x;
    cout << "Ingresa el segundo número: ";
    cin >> y;

    intercambiar(&x, &y);

    cout << "Después del intercambio:\n";
    cout << "Primer número: " << x << endl;
    cout << "Segundo número: " << y << endl;
    return 0;
}
