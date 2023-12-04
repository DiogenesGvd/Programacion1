#include <iostream>
#include <wchar.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "");
  std::cout << "Introduzca la base: ";
  int base;
  std::cin >> base;
  
  std::cout << "Introduzca el exponente máximo: ";
  int exponenteFinal;
  std::cin >> exponenteFinal;
  
  int potencia;
  int exponente;
  
  for (int i = 1; i <= exponenteFinal; i++) {
    potencia = 1;
    exponente = i;
    
    for (int j = 0; j < exponente; j++) {
      potencia *= base;
    }
    
    std::cout << base << "^" << i << " = " << potencia << std::endl;
  }
  
  return 0;
}
