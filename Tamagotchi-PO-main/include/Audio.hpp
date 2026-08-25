#pragma once

#include <SFML/Audio.hpp>
#include <string>

class Audio {
public:
    Audio();
    explicit Audio(const std::string& rutaArchivo);
    bool Cargar(const std::string& rutaArchivo);
    void Reproducir();
    bool VerificarSiEstaReproduciendo() const;
    void EstablecerVolumen(float volumen);

private:
    sf::Music musica_;
};
