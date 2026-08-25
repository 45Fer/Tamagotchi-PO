#include "Tamagotchi.hpp"
#include "Constantes.hpp"

#include <algorithm>

Tamagotchi::Tamagotchi()
    : estadoActual_(&EstadoReposo::Instancia()),
      nivelGasolina_(Constantes::MAX_GASOLINA),
      nivelAceite_(Constantes::MAX_ACEITE),
      nivelLimpieza_(Constantes::MAX_ACEITE) {
}

void Tamagotchi::CambiarEstado(const EstadoTamagotchi& nuevoEstado) {
    estadoActual_ = &nuevoEstado;
}

void Tamagotchi::Tunear() {
    CambiarEstado(EstadoTuneo::Instancia());
}

void Tamagotchi::CargarGasolina() {
    estadoActual_->CargarGasolina(*this);
}

void Tamagotchi::RellenarAceite() {
    estadoActual_->RellenarAceite(*this);
}

void Tamagotchi::Apagar() {
    CambiarEstado(EstadoReposo::Instancia());
}

void Tamagotchi::LimpiarDerrame() { nivelLimpieza_ = Constantes::MAX_ACEITE; }

void Tamagotchi::Desbielar() {
    CambiarEstado(EstadoDesbielado::Instancia());
}

void Tamagotchi::Acelerar() {
    estadoActual_->Acelerar(*this);
}

void Tamagotchi::Derramar() { nivelLimpieza_ = 0; }

void Tamagotchi::Yonquear() {
    CambiarEstado(EstadoYonqueo::Instancia());
}

void Tamagotchi::VerificarAlertas() {
    if (nivelGasolina_ <= 0 || nivelAceite_ <= 0) {
        Desbielar();
    }
}

const EstadoTamagotchi& Tamagotchi::ObtenerEstado() const {
    return *estadoActual_;
}

const char* Tamagotchi::ObtenerNombreEstado() const {
    return estadoActual_->Nombre();
}

int Tamagotchi::ObtenerNivelGasolina() const { return nivelGasolina_; }
int Tamagotchi::ObtenerNivelAceite() const { return nivelAceite_; }
int Tamagotchi::ObtenerNivelLimpieza() const { return nivelLimpieza_; }

void Tamagotchi::EstablecerNivelGasolina(int nivel) {
    nivelGasolina_ = std::max(0, std::min(Constantes::MAX_GASOLINA, nivel));
}

void Tamagotchi::EstablecerNivelAceite(int nivel) {
    nivelAceite_ = std::max(0, std::min(Constantes::MAX_ACEITE, nivel));
}
