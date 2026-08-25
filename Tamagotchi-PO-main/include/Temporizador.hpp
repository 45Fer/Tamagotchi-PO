#pragma once

class Temporizador {
public:
    Temporizador();
    void IniciarConteo();
    void Reiniciar();
    void ActualizarTiempos(float deltaTiempo);
    float ObtenerTiempoCarga() const;
    float ObtenerTiempoDesbielo() const;
    float ObtenerTiempoDerramo() const;

private:
    float tiempoCarga_;
    float tiempoDesbielo_;
    float tiempoDerramo_;
};
