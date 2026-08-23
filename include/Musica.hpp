#pragma once

#include <SFML/Audio.hpp>
#include <string>

class Musica {
public:
    Musica();
    explicit Musica(const std::string& rutaArchivo);
    bool Cargar(const std::string& rutaArchivo);
    void ReproducirAcelerador();
    void ReproducirGasolina();
    void Detener();
    void Pausar();
    void EstablecerVolumen(float volumen);

private:
    sf::Music musica_;
};
