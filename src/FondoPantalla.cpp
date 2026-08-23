#include "FondoPantalla.hpp"

FondoPantalla::FondoPantalla() = default;

bool FondoPantalla::Cargar(const std::string& rutaFondo) {
    if (!textura_.loadFromFile(rutaFondo)) {
        return false;
    }
    sprite_.setTexture(textura_);
    return true;
}

void FondoPantalla::Dibujar(sf::RenderWindow& ventana) {
    if (textura_.getSize().x == 0 || textura_.getSize().y == 0) {
        return;
    }
    const sf::Vector2u tamanoVentana = ventana.getSize();
    const sf::Vector2u tamanoImagen = textura_.getSize();
    sprite_.setScale(static_cast<float>(tamanoVentana.x) / tamanoImagen.x,
                     static_cast<float>(tamanoVentana.y) / tamanoImagen.y);
    ventana.draw(sprite_);
}
