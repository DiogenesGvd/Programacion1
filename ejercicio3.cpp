#include <iostream>
#include <wchar.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
    int puntuacion1, puntuacion2, puntuacion3, puntuacion4;
    
    std::cout << "Ingrese la puntuación 1: ";
    std::cin >> puntuacion1;
    
    std::cout << "Ingrese la puntuación 2: ";
    std::cin >> puntuacion2;
    
    std::cout << "Ingrese la puntuación 3: ";
    std::cin >> puntuacion3;
    
    std::cout << "Ingrese la puntuación 4: ";
    std::cin >> puntuacion4;
    
    // Calcular la media de las puntuaciones
    double media = (puntuacion1 + puntuacion2 + puntuacion3 + puntuacion4) / 4.0;
    
    // Mostrar la media
    std::cout << "La media de las puntuaciones es: " << media << std::endl;
    
    // Mostrar la tabla de notas
    std::cout << "Tabla de notas:" << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "MEDIA\t PUNTUACION" << std::endl;
    if (media >= 90 && media <= 100) {
        std::cout << media << "\t A" << std::endl;
    } else if (media >= 80 && media <= 89) {
        std::cout << media << "\t B" << std::endl;
    } else if (media >= 70 && media <= 79) {
        std::cout << media << "\t C" << std::endl;
    } else if (media >= 60 && media <= 69) {
        std::cout << media << "\t D" << std::endl;
    }
    std::cout << "---------------------------" << std::endl;
    
    return 0;
}
