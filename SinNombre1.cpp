#include <iostream>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main() {
setlocale(LC_ALL, "");
int numero1, numero2, numero3;

cout << "Ingrese el primer n�mero: ";
cin >> numero1;

cout << "Ingrese el segundo n�mero: ";
cin >> numero2;

cout << "Ingrese el tercer n�mero: ";
cin >> numero3;

if(numero1 < numero2 && numero2 < numero3){
cout << "Los n�meros est�n en orden creciente" << endl;
}
else{
cout << "Los n�meros no est�n en orden creciente" << endl;
}

return 0;
}
