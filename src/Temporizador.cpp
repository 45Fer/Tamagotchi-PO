#include "Temporizador.hpp"

Temporizador::Temporizador()
        : tiempoCarga_(0.0f), tiempoDesbielo_(0.0f), tiempoDerramo_(0.0f) {
}

void Temporizador::IniciarConteo() {
    Reiniciar();
}

void Temporizador::Reiniciar() {
    tiempoCarga_ = 0.0f;
    tiempoDesbielo_ = 0.0f;
    tiempoDerramo_ = 0.0f;
}

void Temporizador::ActualizarTiempos(float deltaTiempo) {
    tiempoCarga_ += deltaTiempo;
    tiempoDesbielo_ += deltaTiempo;
    tiempoDerramo_ += deltaTiempo;
}

float Temporizador::ObtenerTiempoCarga() const { return tiempoCarga_; }
float Temporizador::ObtenerTiempoDesbielo() const { return tiempoDesbielo_; }
float Temporizador::ObtenerTiempoDerramo() const { return tiempoDerramo_; }
