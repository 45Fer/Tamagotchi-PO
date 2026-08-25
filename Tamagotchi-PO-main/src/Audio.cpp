#include "Audio.hpp"

Audio::Audio() = default;
Audio::Audio(const std::string& rutaArchivo) { Cargar(rutaArchivo); }

bool Audio::Cargar(const std::string& rutaArchivo) {
    return musica_.openFromFile(rutaArchivo);
}

void Audio::Reproducir() { musica_.play(); }
bool Audio::VerificarSiEstaReproduciendo() const {
    return musica_.getStatus() == sf::Music::Playing;
}
void Audio::EstablecerVolumen(float volumen) { musica_.setVolume(volumen); }
