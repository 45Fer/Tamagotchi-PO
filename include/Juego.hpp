#pragma once

#include "Audio.hpp"
#include "AutoRender.hpp"
#include "Botones.hpp"
#include "FondoPantalla.hpp"
#include "Musica.hpp"
#include "Tamagotchi.hpp"
#include "Temporizador.hpp"
#include "VentanaJuego.h"

class Juego {
public:
    Juego();
    void Jugar();
    void ActualizarEstado();
    void MostrarMenuPrincipal();

private:
    VentanaJuego experiencia_;
    Tamagotchi tamagotchi_;
    Temporizador temporizador_;
    Musica musica_;
    Botones botones_;
    Audio audio_;
    AutoRender autoRender_;
    FondoPantalla fondoPantalla_;
    bool gameOver_;
};
