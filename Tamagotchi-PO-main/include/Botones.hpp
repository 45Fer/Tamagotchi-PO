#pragma once

#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Rect.hpp>

enum class AccionBoton {
    Ninguna,
    CargarGasolina,
    LimpiarDerrame,
    Dormir,
    Acelerar,
    Salir
};

class Botones {
public:
    Botones();
    void ClickDormir();
    void ClickLimpiar();
    void ClickCargar();
    AccionBoton ProcesarEvento(const sf::Event& evento) const;
    void EstablecerZonas(const sf::FloatRect& dormir,
                         const sf::FloatRect& limpiar,
                         const sf::FloatRect& cargar);

private:
    sf::FloatRect zonaDormir_;
    sf::FloatRect zonaLimpiar_;
    sf::FloatRect zonaCargar_;
};
