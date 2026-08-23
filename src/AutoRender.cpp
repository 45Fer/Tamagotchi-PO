#include "AutoRender.hpp"
#include "FondoPantalla.hpp"

AutoRender::AutoRender() : fondo_(nullptr), tamagotchi_(nullptr) {}

void AutoRender::DibujarFondo(sf::RenderWindow& ventana) {
    if (fondo_ != nullptr) {
        fondo_->Dibujar(ventana);
    }
}

void AutoRender::DibujarAuto(sf::RenderWindow&, EstadoTamagotchi) {}
void AutoRender::DibujarBarrasEstado(sf::RenderWindow&, int, int) {}
void AutoRender::EstablecerFondo(FondoPantalla* fondo) { fondo_ = fondo; }
void AutoRender::EstablecerTamagotchi(Tamagotchi* tamagotchi) {
    tamagotchi_ = tamagotchi;
}
