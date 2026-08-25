#pragma once

#include <SFML/Graphics.hpp>
#include "EstadoTamagotchi.hpp"

class Tamagotchi;
class FondoPantalla;

class AutoRender {
public:
    AutoRender();
    void DibujarFondo(sf::RenderWindow& ventana);
    void DibujarAuto(sf::RenderWindow& ventana, const EstadoTamagotchi& estado);
    void DibujarBarrasEstado(sf::RenderWindow& ventana, int gasolina, int aceite);
    void EstablecerFondo(FondoPantalla* fondo);
    void EstablecerTamagotchi(Tamagotchi* tamagotchi);

private:
    FondoPantalla* fondo_;
    Tamagotchi* tamagotchi_;
};
