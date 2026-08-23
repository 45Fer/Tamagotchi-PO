#include "Ventana.hpp"

Ventana::Ventana(int ancho, int alto, const std::string& titulo)
    : ventana_(sf::VideoMode(ancho, alto), titulo) {
}

bool Ventana::estaAbierta() const {
    return ventana_.isOpen();
}

void Ventana::limpiar() {
    ventana_.clear(sf::Color::Black);
}

void Ventana::mostrar() {
    ventana_.display();
}

bool Ventana::procesarEvento(sf::Event& evento) {
    return ventana_.pollEvent(evento);
}

sf::RenderWindow& Ventana::obtenerVentana() {
    return ventana_;
}