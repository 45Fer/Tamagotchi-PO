#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class FondoPantalla {
public:
    FondoPantalla();
    bool Cargar(const std::string& rutaFondo);
    void Dibujar(sf::RenderWindow& ventana);

private:
    sf::Texture textura_;
    sf::Sprite sprite_;
};
