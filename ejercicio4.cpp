#include <iostream>

using namespace std;

int main() {
    float hijo1, hijo2, hijo3;
    float media;
    
    cout << "Ingrese la edad del primer hijo: ";
    cin >> hijo1;
    
    cout << "Ingrese la edad del segundo hijo: ";
    cin >> hijo2;
    
    cout << "Ingrese la edad del tercer hijo: ";
    cin >> hijo3;
    
    media = (hijo1 + hijo2 + hijo3) / 3;
    
    if (hijo1 < hijo2 && hijo1 < hijo3) {
        cout << "El hijo 1 es el menor." << endl;
    } else if (hijo2 < hijo1 && hijo2 < hijo3) {
        cout << "El hijo 2 es el menor." << endl;
    } else if (hijo3 < hijo1 && hijo3 < hijo2) {
        cout << "El hijo 3 es el menor." << endl;
    }
    
    if (hijo1 > hijo2 && hijo1 > hijo3) {
        cout << "El hijo 1 es el mayor." << endl;
    } else if (hijo2 > hijo1 && hijo2 > hijo3) {
        cout << "El hijo 2 es el mayor." << endl;
    } else if (hijo3 > hijo1 && hijo3 > hijo2) {
        cout << "El hijo 3 es el mayor." << endl;
    }
    
    cout << "La media de las edades es: " << media << endl;
    
    return 0;
}
