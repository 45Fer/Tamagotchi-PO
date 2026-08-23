#include "Tamagotchi.hpp"
#include "Constantes.hpp"

Tamagotchi::Tamagotchi()
    : estadoActual_(EstadoTamagotchi::REPOSO),
      nivelGasolina_(Constantes::MAX_GASOLINA),
      nivelAceite_(Constantes::MAX_ACEITE),
      nivelLimpieza_(Constantes::MAX_ACEITE) {
}

void Tamagotchi::CargarGasolina() { nivelGasolina_ = Constantes::MAX_GASOLINA; }
void Tamagotchi::RellenarAceite() { nivelAceite_ = Constantes::MAX_ACEITE; }
void Tamagotchi::Apagar() { estadoActual_ = EstadoTamagotchi::REPOSO; }
void Tamagotchi::LimpiarDerrame() { nivelLimpieza_ = Constantes::MAX_ACEITE; }
void Tamagotchi::Desbielar() { estadoActual_ = EstadoTamagotchi::DESBIELADO; }
void Tamagotchi::Acelerar() { estadoActual_ = EstadoTamagotchi::ACELERADO; }
void Tamagotchi::Derramar() { nivelLimpieza_ = 0; }
void Tamagotchi::Yonquear() { estadoActual_ = EstadoTamagotchi::YONQUEO; }

void Tamagotchi::VerificarAlertas() {
    if (nivelGasolina_ <= 0 || nivelAceite_ <= 0) {
        estadoActual_ = EstadoTamagotchi::DESBIELADO;
    }
}

EstadoTamagotchi Tamagotchi::ObtenerEstado() const { return estadoActual_; }
int Tamagotchi::ObtenerNivelGasolina() const { return nivelGasolina_; }
int Tamagotchi::ObtenerNivelAceite() const { return nivelAceite_; }
int Tamagotchi::ObtenerNivelLimpieza() const { return nivelLimpieza_; }
