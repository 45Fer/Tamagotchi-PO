#pragma once

#include "EstadoTamagotchi.hpp"

class Temporizador;

class Tamagotchi {
public:
    Tamagotchi();
    void Tunear();
    void CargarGasolina();
    void RellenarAceite();
    void Apagar();
    void LimpiarDerrame();
    void Desbielar();
    void Acelerar();
    void Derramar();
    void Yonquear();
    void VerificarAlertas();
    EstadoTamagotchi ObtenerEstado() const;
    int ObtenerNivelGasolina() const;
    int ObtenerNivelAceite() const;
    int ObtenerNivelLimpieza() const;

private:
    EstadoTamagotchi estadoActual_;
    int nivelGasolina_;
    int nivelAceite_;
    int nivelLimpieza_;
};
