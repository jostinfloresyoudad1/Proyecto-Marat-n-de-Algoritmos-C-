#include <iostream>
using namespace std;
int main() {
    int a = 13, b = 14;
    int *pa = &a, *pb = &b;
    cout << "Valores iniciales: " << *pa << ", " << *pb << endl;
    *pa += *pb;
    cout << "Resultado: " << *pa << endl;
    return 0;
}