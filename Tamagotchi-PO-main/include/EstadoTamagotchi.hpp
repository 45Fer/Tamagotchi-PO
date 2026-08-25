#pragma once

class Tamagotchi;

class EstadoTamagotchi {
public:
    virtual ~EstadoTamagotchi() = default;
    virtual void Acelerar(Tamagotchi& tamagotchi) const = 0;
    virtual void CargarGasolina(Tamagotchi& tamagotchi) const = 0;
    virtual void RellenarAceite(Tamagotchi& tamagotchi) const = 0;
    virtual const char* Nombre() const = 0;
};

class EstadoTuneo final : public EstadoTamagotchi {
public:
    static const EstadoTuneo& Instancia();
    void Acelerar(Tamagotchi& tamagotchi) const override;
    void CargarGasolina(Tamagotchi& tamagotchi) const override;
    void RellenarAceite(Tamagotchi& tamagotchi) const override;
    const char* Nombre() const override;

private:
    EstadoTuneo() = default;
};

class EstadoReposo final : public EstadoTamagotchi {
public:
    static const EstadoReposo& Instancia();
    void Acelerar(Tamagotchi& tamagotchi) const override;
    void CargarGasolina(Tamagotchi& tamagotchi) const override;
    void RellenarAceite(Tamagotchi& tamagotchi) const override;
    const char* Nombre() const override;

private:
    EstadoReposo() = default;
};

class EstadoDesbielado final : public EstadoTamagotchi {
public:
    static const EstadoDesbielado& Instancia();
    void Acelerar(Tamagotchi& tamagotchi) const override;
    void CargarGasolina(Tamagotchi& tamagotchi) const override;
    void RellenarAceite(Tamagotchi& tamagotchi) const override;
    const char* Nombre() const override;

private:
    EstadoDesbielado() = default;
};

class EstadoYonqueo final : public EstadoTamagotchi {
public:
    static const EstadoYonqueo& Instancia();
    void Acelerar(Tamagotchi& tamagotchi) const override;
    void CargarGasolina(Tamagotchi& tamagotchi) const override;
    void RellenarAceite(Tamagotchi& tamagotchi) const override;
    const char* Nombre() const override;

private:
    EstadoYonqueo() = default;
};
