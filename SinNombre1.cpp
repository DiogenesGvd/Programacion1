#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL, "");
int numero1, numero2, numero3;

cout << "Ingrese el primer número: ";
cin >> numero1;

cout << "Ingrese el segundo número: ";
cin >> numero2;

cout << "Ingrese el tercer número: ";
cin >> numero3;

if(numero1 < numero2 && numero2 < numero3){
cout << "Los números están en orden creciente" << endl;
}
else{
cout << "Los números no están en orden creciente" << endl;
}

return 0;
}
