#pragma once

#include <SFML/Graphics.hpp>
#include <string>

class Ventana {
public:
    Ventana(int ancho, int alto, const std::string& titulo);

    bool estaAbierta() const;
    void limpiar();
    void mostrar();
    bool procesarEvento(sf::Event& evento);
    sf::RenderWindow& obtenerVentana();

private:
    sf::RenderWindow ventana_;
};