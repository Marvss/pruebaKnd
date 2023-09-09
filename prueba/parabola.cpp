#include <iostream>
#include <cmath>

const double g = 9.81; // Aceleración debida a la gravedad en m/s^2

void simularMovimientoParabolico(double angulo, double velocidadInicial) {
    // Convertir el ángulo de grados a radianes
    angulo = angulo * M_PI / 180.0;

    // Calcular las componentes horizontal y vertical de la velocidad inicial
    double velocidadHorizontal = velocidadInicial * cos(angulo);
    double velocidadVertical = velocidadInicial * sin(angulo);

    // Tiempo total de vuelo
    double tiempoTotal = (2.0 * velocidadVertical) / g;

    // Incremento de tiempo para la simulación
    double deltaT = 0.1;

    // Simulación del movimiento
    for (double t = 0; t <= tiempoTotal; t += deltaT) {
        // Calcular la posición en x e y en este instante de tiempo
        double x = velocidadHorizontal * t;
        double y = velocidadVertical * t - 0.5 * g * t * t;

        // Dibujar la posición en la consola
        int posY = static_cast<int>(y * 10); // Escalar para mostrar en la consola
        for (int i = 0; i < posY; i++) {
            std::cout << ' ';
        }
        std::cout << '*' << std::endl;
    }
}

int main() {
    double angulo, velocidadInicial;
    std::cout << "Ingrese el ángulo de lanzamiento (en grados): ";
    std::cin >> angulo;
    std::cout << "Ingrese la velocidad inicial (en m/s): ";
    std::cin >> velocidadInicial;

    simularMovimientoParabolico(angulo, velocidadInicial);

    return 0;
}

