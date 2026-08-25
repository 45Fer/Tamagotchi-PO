#include "Musica.hpp"

Musica::Musica() = default;
Musica::Musica(const std::string& rutaArchivo) { Cargar(rutaArchivo); }

bool Musica::Cargar(const std::string& rutaArchivo) {
    return musica_.openFromFile(rutaArchivo);
}

void Musica::ReproducirAcelerador() { musica_.play(); }
void Musica::ReproducirGasolina() { musica_.play(); }
void Musica::Detener() { musica_.stop(); }
void Musica::Pausar() { musica_.pause(); }
void Musica::EstablecerVolumen(float volumen) { musica_.setVolume(volumen); }
