#include "Juego.hpp"

Juego::Juego()
    : experiencia_(), tamagotchi_(),
      temporizador_(), musica_(), botones_(), audio_(), autoRender_(),
      fondoPantalla_(), gameOver_(false) {
    autoRender_.EstablecerFondo(&fondoPantalla_);
    autoRender_.EstablecerTamagotchi(&tamagotchi_);
}

void Juego::Jugar() {
    if (!experiencia_.crear()) {
        gameOver_ = true;
        return;
    }
    experiencia_.ejecutar();
}

void Juego::ActualizarEstado() {
    tamagotchi_.VerificarAlertas();
}

void Juego::MostrarMenuPrincipal() {
}
