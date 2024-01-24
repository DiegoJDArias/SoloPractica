#include <iostream>
#include <thread>
#include <chrono>

// Función para reproducir un tono de frecuencia específica durante un cierto período de tiempo
void playTone(int frequency, int duration) 
{
    std::cout << "\a";  // Emite un sonido de la consola (compatible con algunos sistemas Unix)
    std::this_thread::sleep_for(std::chrono::milliseconds(duration));
}

int main() 
{
    // Reproduce un tono de 440 Hz durante 500 milisegundos
    playTone(440, 500);

    // Puedes agregar más llamadas a playTone para reproducir diferentes tonos

    return 0;
}
