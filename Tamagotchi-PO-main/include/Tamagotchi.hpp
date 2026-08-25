#pragma once

#include "EstadoTamagotchi.hpp"

class Temporizador;

class Tamagotchi {
public:
    Tamagotchi();
    void CambiarEstado(const EstadoTamagotchi& nuevoEstado);
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
    const EstadoTamagotchi& ObtenerEstado() const;
    const char* ObtenerNombreEstado() const;
    int ObtenerNivelGasolina() const;
    int ObtenerNivelAceite() const;
    int ObtenerNivelLimpieza() const;

private:
    void EstablecerNivelGasolina(int nivel);
    void EstablecerNivelAceite(int nivel);

    const EstadoTamagotchi* estadoActual_;
    int nivelGasolina_;
    int nivelAceite_;
    int nivelLimpieza_;

    friend class EstadoTuneo;
    friend class EstadoReposo;
    friend class EstadoDesbielado;
    friend class EstadoYonqueo;
};
