#include "EstadoTamagotchi.hpp"
#include "Tamagotchi.hpp"

#include "Constantes.hpp"

const EstadoTuneo& EstadoTuneo::Instancia() {
    static const EstadoTuneo instancia;
    return instancia;
}

void EstadoTuneo::Acelerar(Tamagotchi& tamagotchi) const {
    tamagotchi.CambiarEstado(EstadoTuneo::Instancia());
}

void EstadoTuneo::CargarGasolina(Tamagotchi& tamagotchi) const {
    tamagotchi.EstablecerNivelGasolina(Constantes::MAX_GASOLINA);
}

void EstadoTuneo::RellenarAceite(Tamagotchi& tamagotchi) const {
    tamagotchi.EstablecerNivelAceite(Constantes::MAX_ACEITE);
}

const char* EstadoTuneo::Nombre() const {
    return "Tuneo";
}

const EstadoReposo& EstadoReposo::Instancia() {
    static const EstadoReposo instancia;
    return instancia;
}

void EstadoReposo::Acelerar(Tamagotchi& tamagotchi) const {
    tamagotchi.CambiarEstado(EstadoTuneo::Instancia());
}

void EstadoReposo::CargarGasolina(Tamagotchi& tamagotchi) const {
    tamagotchi.EstablecerNivelGasolina(Constantes::MAX_GASOLINA);
}

void EstadoReposo::RellenarAceite(Tamagotchi& tamagotchi) const {
    tamagotchi.EstablecerNivelAceite(Constantes::MAX_ACEITE);
}

const char* EstadoReposo::Nombre() const {
    return "Reposo";
}

const EstadoDesbielado& EstadoDesbielado::Instancia() {
    static const EstadoDesbielado instancia;
    return instancia;
}

void EstadoDesbielado::Acelerar(Tamagotchi&) const {
}

void EstadoDesbielado::CargarGasolina(Tamagotchi& tamagotchi) const {
    tamagotchi.EstablecerNivelGasolina(Constantes::MAX_GASOLINA);
    if (tamagotchi.ObtenerNivelAceite() > 0) {
        tamagotchi.CambiarEstado(EstadoTuneo::Instancia());
    }
}

void EstadoDesbielado::RellenarAceite(Tamagotchi& tamagotchi) const {
    tamagotchi.EstablecerNivelAceite(Constantes::MAX_ACEITE);
    if (tamagotchi.ObtenerNivelGasolina() > 0) {
        tamagotchi.CambiarEstado(EstadoTuneo::Instancia());
    }
}

const char* EstadoDesbielado::Nombre() const {
    return "Desbielado";
}

const EstadoYonqueo& EstadoYonqueo::Instancia() {
    static const EstadoYonqueo instancia;
    return instancia;
}

void EstadoYonqueo::Acelerar(Tamagotchi&) const {
}

void EstadoYonqueo::CargarGasolina(Tamagotchi&) const {
}

void EstadoYonqueo::RellenarAceite(Tamagotchi&) const {
}

const char* EstadoYonqueo::Nombre() const {
    return "Yonqueo";
}
