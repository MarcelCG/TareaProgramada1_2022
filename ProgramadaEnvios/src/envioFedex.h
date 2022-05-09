#ifndef ENVIOFEDEX_H
#define ENVIOFEDEX_H

#include "envio.h"

using namespace std;

class EnvioFedex : public Envio
{

    float costoBase = 35;
    float distancia;
    float peso;

public:
    EnvioFedex(float distancia, float peso);

    virtual float CalcularEnvio();
};

#endif