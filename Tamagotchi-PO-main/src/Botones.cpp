#include "Botones.hpp"

Botones::Botones() = default;
void Botones::ClickDormir() {}
void Botones::ClickLimpiar() {}
void Botones::ClickCargar() {}

AccionBoton Botones::ProcesarEvento(const sf::Event& evento) const {
    if (evento.type != sf::Event::MouseButtonPressed ||
        evento.mouseButton.button != sf::Mouse::Left) {
        return AccionBoton::Ninguna;
    }

    const sf::Vector2f posicion(static_cast<float>(evento.mouseButton.x),
                                static_cast<float>(evento.mouseButton.y));
    if (zonaDormir_.contains(posicion)) return AccionBoton::Dormir;
    if (zonaLimpiar_.contains(posicion)) return AccionBoton::LimpiarDerrame;
    if (zonaCargar_.contains(posicion)) return AccionBoton::CargarGasolina;
    return AccionBoton::Ninguna;
}

void Botones::EstablecerZonas(const sf::FloatRect& dormir,
                              const sf::FloatRect& limpiar,
                              const sf::FloatRect& cargar) {
    zonaDormir_ = dormir;
    zonaLimpiar_ = limpiar;
    zonaCargar_ = cargar;
}
